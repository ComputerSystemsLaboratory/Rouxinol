#include <iostream>
#include "stdio.h"
using namespace std;

void func(int x, int y, int z)
{
  if(x < y)
  {
    if(y < z)
    {
      std::cout << "Yes" << '\n';
      return;
    }
  }
  std::cout << "No" << '\n';
}

int main()
{
	int x,y,z;
  scanf("%d%d%d",&x,&y,&z );
  func(x,y,z);
  return 0;
}

