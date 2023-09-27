#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
 int a, b, c;
 int divcount = 0;
 scanf("%d %d %d", &a, &b, &c);
 for (int i = a; i <= b; i++)
 {
  if (c % i == 0)
  {
   divcount++;
  }
 }
 cout << divcount << endl;
}
 
