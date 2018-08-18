/**
 * Copyright (C) 2014 Patrick Mours. All rights reserved.
 * License: https://github.com/crosire/reshade#license
 */

#pragma once

#include <stack>
#include <unordered_map>
#include <string>
#include "effect_parser.hpp"

namespace reshadefx
{
	/// <summary>
	/// A scope encapsulating a list of symbols.
	/// </summary>
	struct scope
	{
		std::string name;
		unsigned int level, namespace_level;
	};

	/// <summary>
	/// A single symbol in the symbol table.
	/// </summary>
	using symbol = spv::Id;

	/// <summary>
	/// A symbol table managing a list of scopes and symbols.
	/// </summary>
	class symbol_table
	{
	public:
		symbol_table();

		void enter_scope(symbol parent = 0);
		void enter_namespace(const std::string &name);
		void leave_scope();
		void leave_namespace();

		symbol current_parent() const { return _parent_stack.empty() ? 0 : _parent_stack.top(); }
		const scope &current_scope() const { return _current_scope; }

		bool insert(const std::string &name, symbol symbol, spv::Op type, void *props, bool global = false);

		symbol find(const std::string &name) const;
		symbol find(const std::string &name, const scope &scope, bool exclusive) const;

		bool resolve_call(const std::string &name, const std::vector<type_node> &args, const scope &scope, bool &ambiguous, spv::Op &out_op, spv::Id &out_id, spv::Id &out_type) const;

	private:
		struct symbol_data
		{
			scope scope;
			symbol symbol;
			spv::Op type;
			void *props;
		};

		scope _current_scope;
		std::stack<symbol> _parent_stack;
		std::unordered_map<std::string, std::vector<symbol_data>> _symbol_stack;
	};
}
