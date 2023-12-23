#include "Beverage.h"

int Beverage::sNextOrderNumber = 1;

string Beverage::print() const {
  stringstream ss;
  ss << left << "| " << setw(8) << mOrderNumber << "| " << setw(15) << mName << "| " << setw(9) << mCalories << "| " << setw(5) << mSize << "| ";
  return ss.str();
}