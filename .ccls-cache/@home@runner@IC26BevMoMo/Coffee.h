#ifndef COFFEE_H
#define COFFEE_H

#include "Beverage.h"

class Coffee : public Beverage{
  private:
    int mCaffeine;
    string mRoast;

  public:

    Coffee(string name, int calories, char size, int caffeine, string roast) : Beverage(name, calories, size), mCaffeine(caffeine), mRoast(roast) {}

    
// Getters
int getCaffeine() const {return mCaffeine;}
string getRoast() const {return mRoast;}

// Setters
void setCaffeine(int caffeine) {mCaffeine = caffeine;}
void setRoast(string roast) {mRoast = roast;}

    bool operator==(const Coffee& o) {
      return Beverage::operator==(o) && mCaffeine == o.mCaffeine && mRoast == o.mRoast;
    }

    //Virtual tells c++ the child class can override (redefine) this method
    string print() const;

    friend ostream& operator<<(ostream& os, const Coffee& c) {
      return os << c.print();
    }
};

#endif