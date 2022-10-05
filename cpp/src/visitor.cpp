/**
 * @file visitor.cpp
 * @author Ivan Ogasawara (ivan.ogasawara@gmail.com.com)
 * @brief
 * @version 1.0
 * @date 2022-10-04
 *
 * @copyright BSD-3-Clause
 *
 */
#include "visitor.h"
#include <iostream>
#include "expr.h"
#include "includes.h"

void IntExpr::accept(VisitorExpr* visitor) {
  visitor->visit(this);
}
void FloatExpr::accept(VisitorExpr* visitor) {
  visitor->visit(this);
}

void PrintVisitorExpr::visit(IntExpr* visitor) {
  std::cout << "Value: " << visitor->value << std::endl;
}

void PrintVisitorExpr::visit(FloatExpr* visitor) {
  std::cout << "Value: " << visitor->value << std::endl;
}
