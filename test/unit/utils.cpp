// Copyright (c) 2024 seoulstudent, All Rights Reserved.
// Authors: seoulstudent

#include "math/utils.hpp"

#include <cmath>
#include <limits>
#include <stdexcept>

#include "gtest/gtest.h"

namespace seoulstudent::math {
TEST(MathUtils, Add) {
  // double type, return lhs + rhs
  // lhs, rhs -> nan, inf --> exception std::invalid_argument

  EXPECT_THROW(Add(0.0, std::nan("")), std::invalid_argument);
  EXPECT_THROW(Add(std::nan(""), 0.0), std::invalid_argument);
  EXPECT_THROW(Add(std::nan(""), std::nan("")), std::invalid_argument);
  EXPECT_THROW(Add(0.0, std::numeric_limits<double>::infinity()),
               std::invalid_argument);
  EXPECT_THROW(Add(std::numeric_limits<double>::infinity(), 0.0),
               std::invalid_argument);
  EXPECT_THROW(Add(std::numeric_limits<double>::infinity(),
                   std::numeric_limits<double>::infinity()),
               std::invalid_argument);

  // EXPECT_EQ(Add(0.0, 0.0), 0.0);
  // EXPECT_EQ(Add(1.0, 0.0), 1.0);
  // EXPECT_EQ(Add(0.0, 1.0), 1.0);
  // EXPECT_EQ(Add(0.0, 1.0), 1.0);
}
TEST(MathUtils, Subtract) {
  // double type, return lhs - rhs
  // lhs, rhs -> nan, inf --> exception std::invalid_argument
  EXPECT_THROW(Subtract(0.0, std::nan("")), std::invalid_argument);
}
TEST(MathUtils, Multiply) {
  // double type, return lhs - rhs
  // lhs, rhs -> nan, inf --> exception std::invalid_argument
  EXPECT_THROW(Multiply(0.0, std::nan("")), std::invalid_argument);
}
TEST(MathUtils, Divide) {
  // double type, return lhs - rhs
  // lhs, rhs -> nan, inf --> exception std::invalid_argument
  EXPECT_THROW(Multiply(0.0, std::nan("")), std::invalid_argument);
}

TEST(MathUtils, IsEqual) { EXPECT_TRUE(IsEqual(0.00005 + 0.00005, 0.0001)); }

}  // namespace seoulstudent::math
