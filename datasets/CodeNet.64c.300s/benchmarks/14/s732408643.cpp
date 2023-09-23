#include <stdio.h>
#include <iostream>
using namespace std;
 
int main(int argc, char *argv[])
{
  int a=0, b=0;
  scanf("%d %d", &a, &b);
  if(a<b)
    cout << "a < b" << '\n';
  else if(a==b)
    cout << "a == b" << '\n';
  else
    cout << "a > b" << '\n';
 
  return 0;
}