#include <stdio.h>
#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
  int a=0, b=0, c=0;
  scanf("%d %d %d", &a, &b, &c);
  if(a<b && b<c)
    cout << "Yes"; 
  else
    cout << "No";

  cout << endl;
  return 0;
}