/**
 * @file expr.cpp
 * @author Ivan Ogasawara (ivan.ogasawara@gmail.com)
 * @brief
 * @version 1.0
 * @date 2022-10-04
 *
 * @copyright BSD-3-Clause
 *
 */
#include "expr.h"
#include "includes.h"
#include "visitor.h"

IntExpr::IntExpr(int value) {
  this->value = value;
}
FloatExpr::FloatExpr(float value) {
  this->value = value;
}
