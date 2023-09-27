#include <iostream>
#include "stdio.h"
using namespace std;

void func(int x, int y);


int main()
{
  int x,y;
  scanf("%d%d",&x,&y );
  func(x,y);
  return 0;
}

void func(int x, int y)
{
  if(x > y) cout << "a > b" << endl;
  if(x < y) cout << "a < b" << endl;
  if(x == y) cout << "a == b" << endl;
}
