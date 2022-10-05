/**
 * @file main.cpp
 * @author Ivan Ogasawara (ivan.ogasawara@gmail.com)
 * @brief
 * @version 1.0
 * @date 2022-10-04
 *
 * @copyright BSD-3-Clause
 *
 */
#include <iostream>
#include <memory>
#include <utility>

#include "expr.h"
#include "includes.h"
#include "visitor.h"

int main() {
  FloatExpr* f_expr = new FloatExpr(1.1);
  IntExpr* i_expr = new IntExpr(1);

  PrintVisitorExpr* visitor = new PrintVisitorExpr();

  visitor->visit(f_expr);
  visitor->visit(i_expr);

  delete f_expr;
  delete i_expr;
}
