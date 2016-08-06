#include <iostream>
using namespace std;

// g++ -Wall -Wextra -Werror -std=c++11 override.cpp

class Base {
  public:
    virtual int methodA() =0;
    virtual string MethodB() final
    {
      return "Hello from MethodB";
    }
    virtual string MethodC(float)
    {
      return "Hello from MethodC";
    }
};

class Derived : public Base {
  public:
    virtual int methodA() override {return 0;};
    virtual string MethodC(float) override
    {
      return "override MethodC";
    }
};

int main(void)
{
  // Cant create a because virtual a is not defined ==> MethodA pure virtual
  //Base a;
  Derived b;
  cout << b.MethodB() << endl;
  cout << b.MethodC(4) << endl;
  cout << b.Base::MethodC(4) << endl;
  return (0);
}
