#define type_void  { spv_type::datatype_void }
#define type_bool  { spv_type::datatype_bool, 1, 1 }
#define type_bool2 { spv_type::datatype_bool, 2, 1 }
#define type_bool3 { spv_type::datatype_bool, 3, 1 }
#define type_bool4 { spv_type::datatype_bool, 4, 1 }
#define type_int  { spv_type::datatype_int, 1, 1 }
#define type_int2 { spv_type::datatype_int, 2, 1 }
#define type_int3 { spv_type::datatype_int, 3, 1 }
#define type_int4 { spv_type::datatype_int, 4, 1 }
#define type_uint  { spv_type::datatype_uint, 1, 1 }
#define type_uint2 { spv_type::datatype_uint, 2, 1 }
#define type_uint3 { spv_type::datatype_uint, 3, 1 }
#define type_uint4 { spv_type::datatype_uint, 4, 1 }
#define type_float  { spv_type::datatype_float, 1, 1 }
#define type_float2 { spv_type::datatype_float, 2, 1 }
#define type_float3 { spv_type::datatype_float, 3, 1 }
#define type_float4 { spv_type::datatype_float, 4, 1 }
#define type_float2x2 { spv_type::datatype_float, 2, 2 }
#define type_float3x3 { spv_type::datatype_float, 3, 3 }
#define type_float4x4 { spv_type::datatype_float, 4, 4 }
#define type_sampled_texture { spv_type::datatype_sampler }

struct intrinsic
{
	intrinsic(const char *name, spv::Op op, spv::GLSLstd450 x, const reshadefx::spv_type &ret_type) : op(op), glsl(x)
	{
		function.name = name;
		function.return_type = ret_type;
	}
	intrinsic(const char *name, spv::Op op, spv::GLSLstd450 x, const reshadefx::spv_type &ret_type, const reshadefx::spv_type &arg0_type) : op(op), glsl(x)
	{
		function.name = name;
		function.return_type = ret_type;
		function.parameter_list.push_back({ arg0_type });
	}
	intrinsic(const char *name, spv::Op op, spv::GLSLstd450 x, const reshadefx::spv_type &ret_type, const reshadefx::spv_type &arg0_type, const reshadefx::spv_type &arg1_type) : op(op), glsl(x)
	{
		function.name = name;
		function.return_type = ret_type;
		function.parameter_list.push_back({ arg0_type });
		function.parameter_list.push_back({ arg1_type });
	}
	intrinsic(const char *name, spv::Op op, spv::GLSLstd450 x, const reshadefx::spv_type &ret_type, const reshadefx::spv_type &arg0_type, const reshadefx::spv_type &arg1_type, const reshadefx::spv_type &arg2_type) : op(op), glsl(x)
	{
		function.name = name;
		function.return_type = ret_type;
		function.parameter_list.push_back({ arg0_type });
		function.parameter_list.push_back({ arg1_type });
		function.parameter_list.push_back({ arg2_type });
	}
	intrinsic(const char *name, spv::Op op, spv::GLSLstd450 x, const reshadefx::spv_type &ret_type, const reshadefx::spv_type &arg0_type, const reshadefx::spv_type &arg1_type, const reshadefx::spv_type &arg2_type, const reshadefx::spv_type &arg3_type) : op(op), glsl(x)
	{
		function.name = name;
		function.return_type = ret_type;
		function.parameter_list.push_back({ arg0_type });
		function.parameter_list.push_back({ arg1_type });
		function.parameter_list.push_back({ arg2_type });
		function.parameter_list.push_back({ arg3_type });
	}

	spv::Op op;
	spv::GLSLstd450 glsl;
	spv_function_info function;
};

static const intrinsic s_intrinsics[] = {

{ "abs", spv::OpExtInst, spv::GLSLstd450FAbs, type_float, type_float },
{ "abs", spv::OpExtInst, spv::GLSLstd450FAbs, type_float2, type_float2 },
{ "abs", spv::OpExtInst, spv::GLSLstd450FAbs, type_float3, type_float3 },
{ "abs", spv::OpExtInst, spv::GLSLstd450FAbs, type_float4, type_float4 },
{ "abs", spv::OpExtInst, spv::GLSLstd450SAbs, type_int, type_int },
{ "abs", spv::OpExtInst, spv::GLSLstd450SAbs, type_int2, type_int2 },
{ "abs", spv::OpExtInst, spv::GLSLstd450SAbs, type_int3, type_int3 },
{ "abs", spv::OpExtInst, spv::GLSLstd450SAbs, type_int4, type_int4 },
{ "acos", spv::OpExtInst, spv::GLSLstd450Acos, type_float, type_float },
{ "acos", spv::OpExtInst, spv::GLSLstd450Acos, type_float2, type_float2 },
{ "acos", spv::OpExtInst, spv::GLSLstd450Acos, type_float3, type_float3 },
{ "acos", spv::OpExtInst, spv::GLSLstd450Acos, type_float4, type_float4 },
{ "all", spv::OpAll, spv::GLSLstd450Bad, type_bool, type_bool },
{ "all", spv::OpAll, spv::GLSLstd450Bad, type_bool, type_bool2 },
{ "all", spv::OpAll, spv::GLSLstd450Bad, type_bool, type_bool3 },
{ "all", spv::OpAll, spv::GLSLstd450Bad, type_bool, type_bool4 },
{ "any", spv::OpAny, spv::GLSLstd450Bad, type_bool, type_bool },
{ "any", spv::OpAny, spv::GLSLstd450Bad, type_bool, type_bool2 },
{ "any", spv::OpAny, spv::GLSLstd450Bad, type_bool, type_bool3 },
{ "any", spv::OpAny, spv::GLSLstd450Bad, type_bool, type_bool4 },
{ "asfloat", spv::OpBitcast, spv::GLSLstd450Bad, type_float, type_int },
{ "asfloat", spv::OpBitcast, spv::GLSLstd450Bad, type_float2, type_int2 },
{ "asfloat", spv::OpBitcast, spv::GLSLstd450Bad, type_float3, type_int3 },
{ "asfloat", spv::OpBitcast, spv::GLSLstd450Bad, type_float4, type_int4 },
{ "asfloat", spv::OpBitcast, spv::GLSLstd450Bad, type_float, type_uint },
{ "asfloat", spv::OpBitcast, spv::GLSLstd450Bad, type_float2, type_uint2 },
{ "asfloat", spv::OpBitcast, spv::GLSLstd450Bad, type_float3, type_uint3 },
{ "asfloat", spv::OpBitcast, spv::GLSLstd450Bad, type_float4, type_uint4 },
{ "asin", spv::OpExtInst, spv::GLSLstd450Asin, type_float, type_float },
{ "asin", spv::OpExtInst, spv::GLSLstd450Asin, type_float2, type_float2 },
{ "asin", spv::OpExtInst, spv::GLSLstd450Asin, type_float3, type_float3 },
{ "asin", spv::OpExtInst, spv::GLSLstd450Asin, type_float4, type_float4 },
{ "asint", spv::OpBitcast, spv::GLSLstd450Bad, type_int, type_float },
{ "asint", spv::OpBitcast, spv::GLSLstd450Bad, type_int2, type_float2 },
{ "asint", spv::OpBitcast, spv::GLSLstd450Bad, type_int3, type_float3 },
{ "asint", spv::OpBitcast, spv::GLSLstd450Bad, type_int4, type_float4 },
{ "asuint", spv::OpBitcast, spv::GLSLstd450Bad, type_uint, type_float },
{ "asuint", spv::OpBitcast, spv::GLSLstd450Bad, type_uint2, type_float2 },
{ "asuint", spv::OpBitcast, spv::GLSLstd450Bad, type_uint3, type_float3 },
{ "asuint", spv::OpBitcast, spv::GLSLstd450Bad, type_uint4, type_float4 },
{ "atan", spv::OpExtInst, spv::GLSLstd450Atan, type_float, type_float },
{ "atan", spv::OpExtInst, spv::GLSLstd450Atan, type_float2, type_float2 },
{ "atan", spv::OpExtInst, spv::GLSLstd450Atan, type_float3, type_float3 },
{ "atan", spv::OpExtInst, spv::GLSLstd450Atan, type_float4, type_float4 },
{ "atan2", spv::OpExtInst, spv::GLSLstd450Atan2, type_float, type_float, type_float },
{ "atan2", spv::OpExtInst, spv::GLSLstd450Atan2, type_float2, type_float2, type_float2 },
{ "atan2", spv::OpExtInst, spv::GLSLstd450Atan2, type_float3, type_float3, type_float3 },
{ "atan2", spv::OpExtInst, spv::GLSLstd450Atan2, type_float4, type_float4, type_float4 },
{ "ceil", spv::OpExtInst, spv::GLSLstd450Ceil, type_float, type_float },
{ "ceil", spv::OpExtInst, spv::GLSLstd450Ceil, type_float2, type_float2 },
{ "ceil", spv::OpExtInst, spv::GLSLstd450Ceil, type_float3, type_float3 },
{ "ceil", spv::OpExtInst, spv::GLSLstd450Ceil, type_float4, type_float4 },
{ "clamp", spv::OpExtInst, spv::GLSLstd450NClamp, type_float, type_float, type_float, type_float },
{ "clamp", spv::OpExtInst, spv::GLSLstd450NClamp, type_float2, type_float2, type_float2, type_float2 },
{ "clamp", spv::OpExtInst, spv::GLSLstd450NClamp, type_float3, type_float3, type_float3, type_float3 },
{ "clamp", spv::OpExtInst, spv::GLSLstd450NClamp, type_float4, type_float4, type_float4, type_float4 },
{ "cos", spv::OpExtInst, spv::GLSLstd450Cos, type_float, type_float },
{ "cos", spv::OpExtInst, spv::GLSLstd450Cos, type_float2, type_float2 },
{ "cos", spv::OpExtInst, spv::GLSLstd450Cos, type_float3, type_float3 },
{ "cos", spv::OpExtInst, spv::GLSLstd450Cos, type_float4, type_float4 },
{ "cosh", spv::OpExtInst, spv::GLSLstd450Cosh, type_float, type_float },
{ "cosh", spv::OpExtInst, spv::GLSLstd450Cosh, type_float2, type_float2 },
{ "cosh", spv::OpExtInst, spv::GLSLstd450Cosh, type_float3, type_float3 },
{ "cosh", spv::OpExtInst, spv::GLSLstd450Cosh, type_float4, type_float4 },
{ "cross", spv::OpExtInst, spv::GLSLstd450Cross, type_float3, type_float3, type_float3 },
{ "ddx", spv::OpDPdx, spv::GLSLstd450Bad, type_float, type_float },
{ "ddx", spv::OpDPdx, spv::GLSLstd450Bad, type_float2, type_float2 },
{ "ddx", spv::OpDPdx, spv::GLSLstd450Bad, type_float3, type_float3 },
{ "ddx", spv::OpDPdx, spv::GLSLstd450Bad, type_float4, type_float4 },
{ "ddy", spv::OpDPdy, spv::GLSLstd450Bad, type_float, type_float },
{ "ddy", spv::OpDPdy, spv::GLSLstd450Bad, type_float2, type_float2 },
{ "ddy", spv::OpDPdy, spv::GLSLstd450Bad, type_float3, type_float3 },
{ "ddy", spv::OpDPdy, spv::GLSLstd450Bad, type_float4, type_float4 },
{ "degrees", spv::OpExtInst, spv::GLSLstd450Degrees, type_float, type_float },
{ "degrees", spv::OpExtInst, spv::GLSLstd450Degrees, type_float2, type_float2 },
{ "degrees", spv::OpExtInst, spv::GLSLstd450Degrees, type_float3, type_float3 },
{ "degrees", spv::OpExtInst, spv::GLSLstd450Degrees, type_float4, type_float4 },
{ "determinant", spv::OpExtInst, spv::GLSLstd450Determinant, type_float, type_float2x2 },
{ "determinant", spv::OpExtInst, spv::GLSLstd450Determinant, type_float, type_float3x3 },
{ "determinant", spv::OpExtInst, spv::GLSLstd450Determinant, type_float, type_float4x4 },
{ "distance", spv::OpExtInst, spv::GLSLstd450Distance, type_float, type_float, type_float },
{ "distance", spv::OpExtInst, spv::GLSLstd450Distance, type_float, type_float2, type_float2 },
{ "distance", spv::OpExtInst, spv::GLSLstd450Distance, type_float, type_float3, type_float3 },
{ "distance", spv::OpExtInst, spv::GLSLstd450Distance, type_float, type_float4, type_float4 },
{ "dot", spv::OpDot, spv::GLSLstd450Bad, type_float, type_float, type_float },
{ "dot", spv::OpDot, spv::GLSLstd450Bad, type_float, type_float2, type_float2 },
{ "dot", spv::OpDot, spv::GLSLstd450Bad, type_float, type_float3, type_float3 },
{ "dot", spv::OpDot, spv::GLSLstd450Bad, type_float, type_float4, type_float4 },
{ "exp", spv::OpExtInst, spv::GLSLstd450Exp, type_float, type_float },
{ "exp", spv::OpExtInst, spv::GLSLstd450Exp, type_float2, type_float2 },
{ "exp", spv::OpExtInst, spv::GLSLstd450Exp, type_float3, type_float3 },
{ "exp", spv::OpExtInst, spv::GLSLstd450Exp, type_float4, type_float4 },
{ "exp2", spv::OpExtInst, spv::GLSLstd450Exp2, type_float, type_float },
{ "exp2", spv::OpExtInst, spv::GLSLstd450Exp2, type_float2, type_float2 },
{ "exp2", spv::OpExtInst, spv::GLSLstd450Exp2, type_float3, type_float3 },
{ "exp2", spv::OpExtInst, spv::GLSLstd450Exp2, type_float4, type_float4 },
{ "faceforward", spv::OpExtInst, spv::GLSLstd450FaceForward, type_float, type_float, type_float, type_float },
{ "faceforward", spv::OpExtInst, spv::GLSLstd450FaceForward, type_float2, type_float2, type_float2, type_float2 },
{ "faceforward", spv::OpExtInst, spv::GLSLstd450FaceForward, type_float3, type_float3, type_float3, type_float3 },
{ "faceforward", spv::OpExtInst, spv::GLSLstd450FaceForward, type_float4, type_float4, type_float4, type_float4 },
{ "floor", spv::OpExtInst, spv::GLSLstd450Floor, type_float, type_float },
{ "floor", spv::OpExtInst, spv::GLSLstd450Floor, type_float2, type_float2 },
{ "floor", spv::OpExtInst, spv::GLSLstd450Floor, type_float3, type_float3 },
{ "floor", spv::OpExtInst, spv::GLSLstd450Floor, type_float4, type_float4 },
{ "frac", spv::OpExtInst, spv::GLSLstd450Fract, type_float, type_float },
{ "frac", spv::OpExtInst, spv::GLSLstd450Fract, type_float2, type_float2 },
{ "frac", spv::OpExtInst, spv::GLSLstd450Fract, type_float3, type_float3 },
{ "frac", spv::OpExtInst, spv::GLSLstd450Fract, type_float4, type_float4 },
{ "frexp", spv::OpExtInst, spv::GLSLstd450Frexp, type_float, type_float, type_float },
{ "frexp", spv::OpExtInst, spv::GLSLstd450Frexp, type_float2, type_float2, type_float2 },
{ "frexp", spv::OpExtInst, spv::GLSLstd450Frexp, type_float3, type_float3, type_float3 },
{ "frexp", spv::OpExtInst, spv::GLSLstd450Frexp, type_float4, type_float4, type_float4 },
{ "fwidth", spv::OpFwidth, spv::GLSLstd450Bad, type_float, type_float },
{ "fwidth", spv::OpFwidth, spv::GLSLstd450Bad, type_float2, type_float2 },
{ "fwidth", spv::OpFwidth, spv::GLSLstd450Bad, type_float3, type_float3 },
{ "fwidth", spv::OpFwidth, spv::GLSLstd450Bad, type_float4, type_float4 },
{ "isinf", spv::OpIsInf, spv::GLSLstd450Bad, type_float, type_float },
{ "isinf", spv::OpIsInf, spv::GLSLstd450Bad, type_float2, type_float2 },
{ "isinf", spv::OpIsInf, spv::GLSLstd450Bad, type_float3, type_float3 },
{ "isinf", spv::OpIsInf, spv::GLSLstd450Bad, type_float4, type_float4 },
{ "isnan", spv::OpIsNan, spv::GLSLstd450Bad, type_float, type_float },
{ "isnan", spv::OpIsNan, spv::GLSLstd450Bad, type_float2, type_float2 },
{ "isnan", spv::OpIsNan, spv::GLSLstd450Bad, type_float3, type_float3 },
{ "isnan", spv::OpIsNan, spv::GLSLstd450Bad, type_float4, type_float4 },
{ "ldexp", spv::OpExtInst, spv::GLSLstd450Ldexp, type_float, type_float, type_float },
{ "ldexp", spv::OpExtInst, spv::GLSLstd450Ldexp, type_float2, type_float2, type_float2 },
{ "ldexp", spv::OpExtInst, spv::GLSLstd450Ldexp, type_float3, type_float3, type_float3 },
{ "ldexp", spv::OpExtInst, spv::GLSLstd450Ldexp, type_float4, type_float4, type_float4 },
{ "length", spv::OpExtInst, spv::GLSLstd450Length, type_float, type_float },
{ "length", spv::OpExtInst, spv::GLSLstd450Length, type_float, type_float2 },
{ "length", spv::OpExtInst, spv::GLSLstd450Length, type_float, type_float3 },
{ "length", spv::OpExtInst, spv::GLSLstd450Length, type_float, type_float4 },
{ "lerp", spv::OpExtInst, spv::GLSLstd450FMix, type_float, type_float, type_float, type_float },
{ "lerp", spv::OpExtInst, spv::GLSLstd450FMix, type_float2, type_float2, type_float2, type_float2 },
{ "lerp", spv::OpExtInst, spv::GLSLstd450FMix, type_float3, type_float3, type_float3, type_float3 },
{ "lerp", spv::OpExtInst, spv::GLSLstd450FMix, type_float4, type_float4, type_float4, type_float4 },
{ "log", spv::OpExtInst, spv::GLSLstd450Log, type_float, type_float },
{ "log", spv::OpExtInst, spv::GLSLstd450Log, type_float2, type_float2 },
{ "log", spv::OpExtInst, spv::GLSLstd450Log, type_float3, type_float3 },
{ "log", spv::OpExtInst, spv::GLSLstd450Log, type_float4, type_float4 },
//{ "log10", spv::GLSLstd450Log10, type_float, type_float },
//{ "log10", spv::GLSLstd450Log10, type_float2, type_float2 },
//{ "log10", spv::GLSLstd450Log10, type_float3, type_float3 },
//{ "log10", spv::GLSLstd450Log10, type_float4, type_float4 },
{ "log2", spv::OpExtInst, spv::GLSLstd450Log2, type_float, type_float },
{ "log2", spv::OpExtInst, spv::GLSLstd450Log2, type_float2, type_float2 },
{ "log2", spv::OpExtInst, spv::GLSLstd450Log2, type_float3, type_float3 },
{ "log2", spv::OpExtInst, spv::GLSLstd450Log2, type_float4, type_float4 },
{ "mad", spv::OpExtInst, spv::GLSLstd450Fma, type_float, type_float, type_float, type_float },
{ "mad", spv::OpExtInst, spv::GLSLstd450Fma, type_float2, type_float2, type_float2, type_float2 },
{ "mad", spv::OpExtInst, spv::GLSLstd450Fma, type_float3, type_float3, type_float3, type_float3 },
{ "mad", spv::OpExtInst, spv::GLSLstd450Fma, type_float4, type_float4, type_float4, type_float4 },
{ "max", spv::OpExtInst, spv::GLSLstd450FMax, type_float, type_float, type_float },
{ "max", spv::OpExtInst, spv::GLSLstd450FMax, type_float2, type_float2, type_float2 },
{ "max", spv::OpExtInst, spv::GLSLstd450FMax, type_float3, type_float3, type_float3 },
{ "max", spv::OpExtInst, spv::GLSLstd450FMax, type_float4, type_float4, type_float4 },
{ "min", spv::OpExtInst, spv::GLSLstd450FMin, type_float, type_float, type_float },
{ "min", spv::OpExtInst, spv::GLSLstd450FMin, type_float2, type_float2, type_float2 },
{ "min", spv::OpExtInst, spv::GLSLstd450FMin, type_float3, type_float3, type_float3 },
{ "min", spv::OpExtInst, spv::GLSLstd450FMin, type_float4, type_float4, type_float4 },
{ "modf", spv::OpExtInst, spv::GLSLstd450Modf, type_float, type_float, { spv_type::datatype_float, 1, 1, spv_type::qualifier_out, true } },
{ "modf", spv::OpExtInst, spv::GLSLstd450Modf, type_float2, type_float2, { spv_type::datatype_float, 2, 1, spv_type::qualifier_out, true } },
{ "modf", spv::OpExtInst, spv::GLSLstd450Modf, type_float3, type_float3, { spv_type::datatype_float, 3, 1, spv_type::qualifier_out, true } },
{ "modf", spv::OpExtInst, spv::GLSLstd450Modf, type_float4, type_float4, { spv_type::datatype_float, 3, 1, spv_type::qualifier_out, true } },
{ "mul", spv::OpFMul, spv::GLSLstd450Bad, type_float, type_float, type_float },
{ "mul", spv::OpVectorTimesScalar, spv::GLSLstd450Bad, type_float2, type_float, type_float2 },
{ "mul", spv::OpVectorTimesScalar, spv::GLSLstd450Bad, type_float3, type_float, type_float3 },
{ "mul", spv::OpVectorTimesScalar, spv::GLSLstd450Bad, type_float4, type_float, type_float4 },
{ "mul", spv::OpVectorTimesScalar, spv::GLSLstd450Bad, type_float2, type_float2, type_float },
{ "mul", spv::OpVectorTimesScalar, spv::GLSLstd450Bad, type_float3, type_float3, type_float },
{ "mul", spv::OpVectorTimesScalar, spv::GLSLstd450Bad, type_float4, type_float4, type_float },
{ "mul", spv::OpMatrixTimesScalar, spv::GLSLstd450Bad, type_float2x2, type_float, type_float2x2 },
{ "mul", spv::OpMatrixTimesScalar, spv::GLSLstd450Bad, type_float3x3, type_float, type_float3x3 },
{ "mul", spv::OpMatrixTimesScalar, spv::GLSLstd450Bad, type_float4x4, type_float, type_float4x4 },
{ "mul", spv::OpMatrixTimesScalar, spv::GLSLstd450Bad, type_float2x2, type_float2x2, type_float },
{ "mul", spv::OpMatrixTimesScalar, spv::GLSLstd450Bad, type_float3x3, type_float3x3, type_float },
{ "mul", spv::OpMatrixTimesScalar, spv::GLSLstd450Bad, type_float4x4, type_float4x4, type_float },
{ "mul", spv::OpVectorTimesMatrix, spv::GLSLstd450Bad, type_float2, type_float2, type_float2x2 },
{ "mul", spv::OpVectorTimesMatrix, spv::GLSLstd450Bad, type_float3, type_float3, type_float3x3 },
{ "mul", spv::OpVectorTimesMatrix, spv::GLSLstd450Bad, type_float4, type_float4, type_float4x4 },
{ "mul", spv::OpMatrixTimesVector, spv::GLSLstd450Bad, type_float2, type_float2x2, type_float2 },
{ "mul", spv::OpMatrixTimesVector, spv::GLSLstd450Bad, type_float3, type_float3x3, type_float3 },
{ "mul", spv::OpMatrixTimesVector, spv::GLSLstd450Bad, type_float4, type_float4x4, type_float4 },
{ "mul", spv::OpMatrixTimesMatrix, spv::GLSLstd450Bad, type_float2x2, type_float2x2, type_float2x2 },
{ "mul", spv::OpMatrixTimesMatrix, spv::GLSLstd450Bad, type_float3x3, type_float3x3, type_float3x3 },
{ "mul", spv::OpMatrixTimesMatrix, spv::GLSLstd450Bad, type_float4x4, type_float4x4, type_float4x4 },
{ "normalize", spv::OpExtInst, spv::GLSLstd450Normalize, type_float, type_float },
{ "normalize", spv::OpExtInst, spv::GLSLstd450Normalize, type_float2, type_float2 },
{ "normalize", spv::OpExtInst, spv::GLSLstd450Normalize, type_float3, type_float3 },
{ "normalize", spv::OpExtInst, spv::GLSLstd450Normalize, type_float4, type_float4 },
{ "pow", spv::OpExtInst, spv::GLSLstd450Pow, type_float, type_float, type_float },
{ "pow", spv::OpExtInst, spv::GLSLstd450Pow, type_float2, type_float2, type_float2 },
{ "pow", spv::OpExtInst, spv::GLSLstd450Pow, type_float3, type_float3, type_float3 },
{ "pow", spv::OpExtInst, spv::GLSLstd450Pow, type_float4, type_float4, type_float4 },
{ "radians", spv::OpExtInst, spv::GLSLstd450Radians, type_float, type_float },
{ "radians", spv::OpExtInst, spv::GLSLstd450Radians, type_float2, type_float2 },
{ "radians", spv::OpExtInst, spv::GLSLstd450Radians, type_float3, type_float3 },
{ "radians", spv::OpExtInst, spv::GLSLstd450Radians, type_float4, type_float4 },
{ "rcp", spv::OpExtInst, (spv::GLSLstd450)0x10000001, type_float, type_float }, // TODO
{ "rcp", spv::OpExtInst, (spv::GLSLstd450)0x10000001, type_float2, type_float2 },
{ "rcp", spv::OpExtInst, (spv::GLSLstd450)0x10000001, type_float3, type_float3 },
{ "rcp", spv::OpExtInst, (spv::GLSLstd450)0x10000001, type_float4, type_float4 },
{ "reflect", spv::OpExtInst, spv::GLSLstd450Reflect, type_float, type_float, type_float },
{ "reflect", spv::OpExtInst, spv::GLSLstd450Reflect, type_float2, type_float2, type_float2 },
{ "reflect", spv::OpExtInst, spv::GLSLstd450Reflect, type_float3, type_float3, type_float3 },
{ "reflect", spv::OpExtInst, spv::GLSLstd450Reflect, type_float4, type_float4, type_float4 },
{ "refract", spv::OpExtInst, spv::GLSLstd450Refract, type_float, type_float, type_float, type_float },
{ "refract", spv::OpExtInst, spv::GLSLstd450Refract, type_float2, type_float2, type_float2, type_float2 },
{ "refract", spv::OpExtInst, spv::GLSLstd450Refract, type_float3, type_float3, type_float3, type_float3 },
{ "refract", spv::OpExtInst, spv::GLSLstd450Refract, type_float4, type_float4, type_float4, type_float4 },
{ "round", spv::OpExtInst, spv::GLSLstd450Round, type_float, type_float },
{ "round", spv::OpExtInst, spv::GLSLstd450Round, type_float2, type_float2 },
{ "round", spv::OpExtInst, spv::GLSLstd450Round, type_float3, type_float3 },
{ "round", spv::OpExtInst, spv::GLSLstd450Round, type_float4, type_float4 },
{ "rsqrt", spv::OpExtInst, spv::GLSLstd450InverseSqrt, type_float, type_float },
{ "rsqrt", spv::OpExtInst, spv::GLSLstd450InverseSqrt, type_float2, type_float2 },
{ "rsqrt", spv::OpExtInst, spv::GLSLstd450InverseSqrt, type_float3, type_float3 },
{ "rsqrt", spv::OpExtInst, spv::GLSLstd450InverseSqrt, type_float4, type_float4 },
{ "saturate", spv::OpExtInst, (spv::GLSLstd450)0x10000002, type_float, type_float }, // TODO
{ "saturate", spv::OpExtInst, (spv::GLSLstd450)0x10000002, type_float2, type_float2 },
{ "saturate", spv::OpExtInst, (spv::GLSLstd450)0x10000002, type_float3, type_float3 },
{ "saturate", spv::OpExtInst, (spv::GLSLstd450)0x10000002, type_float4, type_float4 },
{ "sign", spv::OpExtInst, spv::GLSLstd450FSign, type_int, type_float },
{ "sign", spv::OpExtInst, spv::GLSLstd450FSign, type_int2, type_float2 },
{ "sign", spv::OpExtInst, spv::GLSLstd450FSign, type_int3, type_float3 },
{ "sign", spv::OpExtInst, spv::GLSLstd450FSign, type_int4, type_float4 },
{ "sign", spv::OpExtInst, spv::GLSLstd450SSign, type_int, type_int },
{ "sign", spv::OpExtInst, spv::GLSLstd450SSign, type_int2, type_int2 },
{ "sign", spv::OpExtInst, spv::GLSLstd450SSign, type_int3, type_int3 },
{ "sign", spv::OpExtInst, spv::GLSLstd450SSign, type_int4, type_int4 },
{ "sin", spv::OpExtInst, spv::GLSLstd450Sin, type_float, type_float },
{ "sin", spv::OpExtInst, spv::GLSLstd450Sin, type_float2, type_float2 },
{ "sin", spv::OpExtInst, spv::GLSLstd450Sin, type_float3, type_float3 },
{ "sin", spv::OpExtInst, spv::GLSLstd450Sin, type_float4, type_float4 },
{ "sincos", spv::OpExtInst, (spv::GLSLstd450)0x10000003, type_void, type_float,  { spv_type::datatype_float, 1, 1, spv_type::qualifier_out, true }, { spv_type::datatype_float, 1, 1, spv_type::qualifier_out, true } }, // TODO
{ "sincos", spv::OpExtInst, (spv::GLSLstd450)0x10000003, type_void, type_float2, { spv_type::datatype_float, 2, 1, spv_type::qualifier_out, true }, { spv_type::datatype_float, 2, 1, spv_type::qualifier_out, true } },
{ "sincos", spv::OpExtInst, (spv::GLSLstd450)0x10000003, type_void, type_float3, { spv_type::datatype_float, 3, 1, spv_type::qualifier_out, true }, { spv_type::datatype_float, 3, 1, spv_type::qualifier_out, true } },
{ "sincos", spv::OpExtInst, (spv::GLSLstd450)0x10000003, type_void, type_float4, { spv_type::datatype_float, 4, 1, spv_type::qualifier_out, true }, { spv_type::datatype_float, 4, 1, spv_type::qualifier_out, true } },
{ "sinh", spv::OpExtInst, spv::GLSLstd450Sinh, type_float, type_float },
{ "sinh", spv::OpExtInst, spv::GLSLstd450Sinh, type_float2, type_float2 },
{ "sinh", spv::OpExtInst, spv::GLSLstd450Sinh, type_float3, type_float3 },
{ "sinh", spv::OpExtInst, spv::GLSLstd450Sinh, type_float4, type_float4 },
{ "smoothstep", spv::OpExtInst, spv::GLSLstd450SmoothStep, type_float, type_float, type_float, type_float },
{ "smoothstep", spv::OpExtInst, spv::GLSLstd450SmoothStep, type_float2, type_float2, type_float2, type_float2 },
{ "smoothstep", spv::OpExtInst, spv::GLSLstd450SmoothStep, type_float3, type_float3, type_float3, type_float3 },
{ "smoothstep", spv::OpExtInst, spv::GLSLstd450SmoothStep, type_float4, type_float4, type_float4, type_float4 },
{ "sqrt", spv::OpExtInst, spv::GLSLstd450Sqrt, type_float, type_float },
{ "sqrt", spv::OpExtInst, spv::GLSLstd450Sqrt, type_float2, type_float2 },
{ "sqrt", spv::OpExtInst, spv::GLSLstd450Sqrt, type_float3, type_float3 },
{ "sqrt", spv::OpExtInst, spv::GLSLstd450Sqrt, type_float4, type_float4 },
{ "step", spv::OpExtInst, spv::GLSLstd450Step, type_float, type_float, type_float },
{ "step", spv::OpExtInst, spv::GLSLstd450Step, type_float2, type_float2, type_float2 },
{ "step", spv::OpExtInst, spv::GLSLstd450Step, type_float3, type_float3, type_float3 },
{ "step", spv::OpExtInst, spv::GLSLstd450Step, type_float4, type_float4, type_float4 },
{ "tan", spv::OpExtInst, spv::GLSLstd450Tan, type_float, type_float },
{ "tan", spv::OpExtInst, spv::GLSLstd450Tan, type_float2, type_float2 },
{ "tan", spv::OpExtInst, spv::GLSLstd450Tan, type_float3, type_float3 },
{ "tan", spv::OpExtInst, spv::GLSLstd450Tan, type_float4, type_float4 },
{ "tanh", spv::OpExtInst, spv::GLSLstd450Tanh, type_float, type_float },
{ "tanh", spv::OpExtInst, spv::GLSLstd450Tanh, type_float2, type_float2 },
{ "tanh", spv::OpExtInst, spv::GLSLstd450Tanh, type_float3, type_float3 },
{ "tanh", spv::OpExtInst, spv::GLSLstd450Tanh, type_float4, type_float4 },
{ "tex2D", spv::OpImageSampleImplicitLod, spv::GLSLstd450Bad, type_float4, type_sampled_texture, type_float2 },
{ "tex2Dfetch", spv::OpImageFetch, spv::GLSLstd450Bad,  type_float4, type_sampled_texture, type_int4 },
{ "tex2Dgather", spv::OpImageGather, spv::GLSLstd450Bad, type_float4, type_sampled_texture, type_float2, type_int },
//{ "tex2Dgatheroffset", intrinsic_expression_node::texture_gather_offset, type_float4, type_sampler, type_float2, type_int2, type_int },
//{ "tex2Dgrad", spv::OpImageGradi intrinsic_expression_node::texture_gradient, type_float4, type_sampler, type_float2, type_float2, type_float2 },
{ "tex2Dlod", spv::OpImageSampleExplicitLod, spv::GLSLstd450Bad, type_float4, type_sampled_texture, type_float4 },
//{ "tex2Dlodoffset", intrinsic_expression_node::texture_level_offset, type_float4, type_sampler, type_float4, type_int2 },
//{ "tex2Doffset", intrinsic_expression_node::texture_offset, type_float4, type_sampler, type_float2, type_int2 },
{ "tex2Dproj", spv::OpImageSampleProjImplicitLod, spv::GLSLstd450Bad, type_float4, type_sampled_texture, type_float4 },
{ "tex2Dsize", spv::OpImageQuerySize, spv::GLSLstd450Bad, type_int2, type_sampled_texture, type_int },
{ "transpose", spv::OpTranspose, spv::GLSLstd450Bad, type_float2x2, type_float2x2 },
{ "transpose", spv::OpTranspose, spv::GLSLstd450Bad, type_float3x3, type_float3x3 },
{ "transpose", spv::OpTranspose, spv::GLSLstd450Bad, type_float4x4, type_float4x4 },
{ "trunc", spv::OpExtInst, spv::GLSLstd450Trunc, type_float, type_float },
{ "trunc", spv::OpExtInst, spv::GLSLstd450Trunc, type_float2, type_float2 },
{ "trunc", spv::OpExtInst, spv::GLSLstd450Trunc, type_float3, type_float3 },
{ "trunc", spv::OpExtInst, spv::GLSLstd450Trunc, type_float4, type_float4 },

};
