#include<iostream>
using namespace std;
#include<vector>
int main()
{
  int n; cin>>n;
  vector<int> cnt(1e4+5);
  for(int x = 1 ; x <= 105; x++)
    for(int y = 1 ; y <= 105;y++)
      for(int z = 1 ; z <= 101 ; z++)
        if(x*x + y*y + z*z + x*y + y*z + z*x < 1e4 + 5)
          cnt[x*x + y*y + z*z + x*y + y*z + z*x]++;
  for(int i = 1 ; i <= n ; i++)
  {cout<<cnt[i]<<endl;}
  return 0;
}