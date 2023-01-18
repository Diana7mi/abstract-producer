#pragma once

// @generated by tools/codegen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/index_add_ops.h>

namespace at {


// aten::index_add.out(Tensor self, int dim, Tensor index, Tensor source, *, Scalar alpha=1, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & index_add_out(at::Tensor & out, const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source, const at::Scalar & alpha=1) {
    return at::_ops::index_add_out::call(self, dim, index, source, alpha, out);
}

// aten::index_add.out(Tensor self, int dim, Tensor index, Tensor source, *, Scalar alpha=1, Tensor(a!) out) -> Tensor(a!)
TORCH_API inline at::Tensor & index_add_outf(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source, const at::Scalar & alpha, at::Tensor & out) {
    return at::_ops::index_add_out::call(self, dim, index, source, alpha, out);
}

// aten::index_add(Tensor self, int dim, Tensor index, Tensor source, *, Scalar alpha=1) -> Tensor
TORCH_API inline at::Tensor index_add(const at::Tensor & self, int64_t dim, const at::Tensor & index, const at::Tensor & source, const at::Scalar & alpha=1) {
    return at::_ops::index_add::call(self, dim, index, source, alpha);
}

// aten::index_add.dimname(Tensor self, Dimname dim, Tensor index, Tensor source, *, Scalar alpha=1) -> Tensor
TORCH_API inline at::Tensor index_add(const at::Tensor & self, at::Dimname dim, const at::Tensor & index, const at::Tensor & source, const at::Scalar & alpha=1) {
    return at::_ops::index_add_dimname::call(self, dim, index, source, alpha);
}

}
