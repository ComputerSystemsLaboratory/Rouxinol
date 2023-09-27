#include <iostream>

int main()
{
  int d;
  while( std::cin >> d ) {
    std::cout << [&]{ int r=0; for( int x=d; x<=600-d; x+=d ){ r += x * x * d; } return r; }() << std::endl;
  }
}