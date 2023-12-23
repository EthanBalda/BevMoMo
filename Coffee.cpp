#include "Coffee.h"

string Coffee::print() const {
  stringstream ss;
  ss << Beverage::print() << setw(14) << mCaffeine << "| " << setw(9) << mRoast << "|";
  return ss.str();
}