#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
 int small[3001];
 int large[3001];
 int i = 0;
 int left, right;
 while (scanf("%d %d", &left, &right), left+right)
 {
  if (left > right)
  {
   large[i] = left;
   small[i] = right;
  }
  else
  {
   large[i] = right;
   small[i] = left;
  }
  i++;
 }
 i = 0;
 while (!(large[i] + small[i] == 0))
 {
  cout << small[i] << " " << large[i] << endl;
  i++;
 }
 return 0;
}


