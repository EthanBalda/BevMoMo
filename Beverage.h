#ifndef BEVERAGE_H
#define BEVERAGE_H

#include <iomanip>
#include <iostream>
#include <sstream>
using namespace std;

class Beverage {
protected:
  string mName;
  int mCalories;
  char mSize;
  int mOrderNumber;
  // static - global variable for the class
  static int sNextOrderNumber;

public:
  Beverage(string name, int calories, char size)
      : mName(name), mCalories(calories), mSize(size),
        mOrderNumber(sNextOrderNumber++) {}
  virtual ~Beverage() {}

  string getName() const { return mName; }
  void setName(string name) { mName = name; }

  int getCalories() const { return mCalories; }
  void setCalories(int calories) { mCalories = calories; }

  char getSize() const { return mSize; }
  void setSize(char size) { mSize = size; }

  bool operator==(const Beverage &o) {
    return mOrderNumber == o.mOrderNumber && mName == o.mName &&
           mCalories == o.mCalories && mSize == o.mSize;
  }

  // Virtual tells c++ the child class can override (redefine) this method
  virtual string print() const;

  friend ostream &operator<<(ostream &os, const Beverage &b) {
    return os << b.print();
  }
};

#endif