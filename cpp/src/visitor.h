/**
 * @file visitor.h
 * @author Ivan Ogasawara (ivan.ogasawara@gmail.com)
 * @brief
 * @version 1.0
 * @date 2022-10-04
 *
 * @copyright BSD-3-Clause
 *
 */
#ifndef HEADER_VISITOR
#define HEADER_VISITOR
#pragma once
#include "includes.h"

class VisitorExpr {
 public:
  virtual void visit(IntExpr* visitor) = 0;
  virtual void visit(FloatExpr* visitor) = 0;
};

class PrintVisitorExpr : VisitorExpr {
 public:
  void visit(IntExpr* visitor);
  void visit(FloatExpr* visitor);
};

#endif  // HEADER_VISITOR
