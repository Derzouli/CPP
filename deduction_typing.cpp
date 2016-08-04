#include <iostream>
#include <typeinfo>
using namespace std;
#define PRINT_NAME(x) cout << #x << " - " << typeid(x).name() << '\n'

int main(void)
{
  int foo = 1;
  auto bar = foo;
  decltype(foo) toto;

  cout << typeid(foo).name() << '\n';
  cout << typeid(bar).name() << '\n';
  PRINT_NAME(foo);
  PRINT_NAME(bar);
  PRINT_NAME(toto);
  return (0);
}
