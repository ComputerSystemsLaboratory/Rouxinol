#include<iostream>
#include<vector>
using namespace std;
int main()
{
  int n; cin>>n;
  vector<int> l(10005);
  for(int x = 1 ; x <= 105; x++)
    for(int y = 1 ; y <= 105;y++)
      for(int z = 1 ; z <= 101 ; z++)
        if(x*x + y*y + z*z + x*y + y*z + z*x < 10005)
          l[x*x + y*y + z*z + x*y + y*z + z*x]++;
  for(int i = 1 ; i <= n ; i++)
  {cout<<l[i]<<endl;}
}