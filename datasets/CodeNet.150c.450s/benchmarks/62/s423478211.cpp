#include <iostream>
int main()
{
  int a, b, c, store;
  std::cin >> a >> b >> c;
  if(a > b){
    store = a;
    a = b;
    b = store;
  }
  if(b > c){
    store = b;
    b = c;
    c = store;
  }
  if(a > b){
    store = a;
    a = b;
    b = store;
  }
  std::cout << a << " " << b << " " << c << '\n';
  return (0);
}