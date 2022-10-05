/**
 * @file expr.h
 * @author Ivan Ogasawara (ivan.ogasawara@gmail.com)
 * @brief
 * @version 1.0
 * @date 2022-10-04
 *
 * @copyright BSD-3-Clause
 *
 */
#ifndef HEADER_EXPR
#define HEADER_EXPR
#pragma once
#include "includes.h"

class Expr {
 public:
  virtual void accept(VisitorExpr* visitor) = 0;
};

class NumberExpr : public Expr {};

class IntExpr : public NumberExpr {
 public:
  int value;

  IntExpr(int value);
  void accept(VisitorExpr* visitor);
};

class FloatExpr : public NumberExpr {
 public:
  float value;

  FloatExpr(float value);
  void accept(VisitorExpr* visitor);
};

#endif  // HEADER_EXPR
