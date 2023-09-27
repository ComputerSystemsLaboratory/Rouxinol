#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
  int n,r,p,c;

  while(cin >> n >> r && n)
  {
    int yama[n];
    for(int i = 0; i < n; i++)
    {
      yama[i] = n-i;
    }
    for(int i = 0; i < r; ++i)
    {
      cin >> p >> c;
      rotate(yama,yama+p-1,yama+ p+ c -1);
    }
    printf("%d\n", yama[0] );
  }
}

