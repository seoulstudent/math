// Copyright (c) 2024 seoulstudent, All Rights Reserved.
// Authors: seoulstudent

#include "math/utils.hpp"

#include <cmath>
#include <limits>
#include <stdexcept>
#include <tuple>

namespace seoulstudent::math {

auto Add(double lhs, double rhs) -> double {
  if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) ||
      std::isinf(rhs)) {
    throw std::invalid_argument("rhs or lhs is nan or inf");
  }
  return lhs + rhs;
}

auto Subtract(double lhs, double rhs) -> double {
  if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) ||
      std::isinf(rhs)) {
    throw std::invalid_argument("rhs or lhs is nan or inf");
  }
  return lhs - rhs;
}

auto Multiply(double lhs, double rhs) -> double {
  if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) ||
      std::isinf(rhs)) {
    throw std::invalid_argument("rhs or lhs is nan or inf");
  }
  return lhs * rhs;
}

auto Divide(double lhs, double rhs) -> double {
  if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) ||
      std::isinf(rhs) || (rhs == 0)) {
    throw std::invalid_argument("rhs or lhs is nan or inf or rhs is zero");
  }
  return lhs / rhs;
}

auto IsEqual(double lhs, double rhs) -> bool {
  return (std::abs(lhs - rhs) < std::numeric_limits<double>::epsilon());
}

auto IsEqual(float lhs, float rhs) -> bool {
  return (std::abs(lhs - rhs) < std::numeric_limits<double>::epsilon());
}

// namespace seoulstudent::math
}  // namespace seoulstudent::math