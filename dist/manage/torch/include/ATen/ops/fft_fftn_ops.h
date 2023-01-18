#pragma once

// @generated by tools/codegen/gen.py from Operator.h

#include <c10/core/QScheme.h>
#include <tuple>
#include <vector>


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

namespace _ops {


struct TORCH_API fft_fftn {
  using schema = at::Tensor (const at::Tensor &, c10::optional<at::IntArrayRef>, c10::optional<at::IntArrayRef>, c10::optional<c10::string_view>);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::fft_fftn")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "fft_fftn(Tensor self, int[1]? s=None, int[1]? dim=None, str? norm=None) -> Tensor")
  static at::Tensor call(const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<c10::string_view> norm);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<c10::string_view> norm);
};

struct TORCH_API fft_fftn_out {
  using schema = at::Tensor & (const at::Tensor &, c10::optional<at::IntArrayRef>, c10::optional<at::IntArrayRef>, c10::optional<c10::string_view>, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::fft_fftn")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "fft_fftn.out(Tensor self, int[1]? s=None, int[1]? dim=None, str? norm=None, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<c10::string_view> norm, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, c10::optional<at::IntArrayRef> s, c10::optional<at::IntArrayRef> dim, c10::optional<c10::string_view> norm, at::Tensor & out);
};

}} // namespace at::_ops
