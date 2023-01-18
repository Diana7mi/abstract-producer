#pragma once
// @generated by tools/codegen/gen.py from DispatchKeyFunction.h

// NB: The implementing C++ file is RegisterDispatchKey.cpp

// The only #includes we need are for custom classes that have defaults in the C++ API
#include <c10/core/MemoryFormat.h>
#include <c10/core/Scalar.h>
#include <ATen/core/Reduction.h>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
namespace c10 {

template<typename T>
class optional;
template<typename T>
class List;
class Stream;
class Scalar;
struct Storage;
struct TensorOptions;

}

namespace at {

class Tensor;
struct Dimname;
struct Generator;
using TensorList = c10::ArrayRef<Tensor>;
using DimnameList = c10::ArrayRef<Dimname>;
using c10::Stream;
using c10::Storage;
using c10::QScheme;
using c10::Scalar;
using c10::TensorOptions;

namespace cpu {

TORCH_API ::std::tuple<at::Tensor,at::Tensor,at::Tensor> linalg_lu_factor_ex(const at::Tensor & A, bool pivot=true, bool check_errors=false);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> linalg_lu_factor_ex_out(at::Tensor & LU, at::Tensor & pivots, at::Tensor & info, const at::Tensor & A, bool pivot=true, bool check_errors=false);
TORCH_API ::std::tuple<at::Tensor &,at::Tensor &,at::Tensor &> linalg_lu_factor_ex_outf(const at::Tensor & A, bool pivot, bool check_errors, at::Tensor & LU, at::Tensor & pivots, at::Tensor & info);

} // namespace cpu
} // namespace at