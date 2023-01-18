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



#include <ATen/ops/poisson_nll_loss_ops.h>

namespace at {


// aten::poisson_nll_loss(Tensor input, Tensor target, bool log_input, bool full, float eps, int reduction) -> Tensor
TORCH_API inline at::Tensor poisson_nll_loss(const at::Tensor & input, const at::Tensor & target, bool log_input, bool full, double eps, int64_t reduction) {
    return at::_ops::poisson_nll_loss::call(input, target, log_input, full, eps, reduction);
}

}