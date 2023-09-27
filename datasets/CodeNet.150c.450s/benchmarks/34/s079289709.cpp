#include <algorithm>
#include <iostream>
using namespace	std;
int a[128]={1,1,2},n;
int main()
{
  for(int i=3;i<31;i++)
    a[i]=a[i-1]+a[i-2]+a[i-3];
  while(cin >> n, n)
    cout << a[n]/10/365+1 << endl;
}