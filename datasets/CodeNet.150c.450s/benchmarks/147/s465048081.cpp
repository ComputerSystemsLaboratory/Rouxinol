#pragma GCC optimize ("O3")
#include<bits/stdc++.h>
using namespace std;

/// Info.
///****************************************************************************************************************************************///
/// author                : BAHAA El-DEEN OSAMA .
/// Problem name          : T - SUM OF DIGITS
/// Method                : brute force
/// Online judge          : vjudge(Contest)
/// Date                  : 8/6/2020
///****************************************************************************************************************************************///

#define ll long long

  vector<ll> vec(10000, 0);
  int n;

int main()
{

  cin >> n;
  for(ll x=1;x<101;++x)
  {
    for(ll y=1;y<101;++y)
    {
      for(ll z=1;z<101;++z)
      {
            if(x*x + y*y + z*z + x*y + y*z + z*x <= 10000)
            {
                vec[x*x + y*y + z*z + x*y + y*z + z*x]++;
            }
      }
    }
  }


  for(ll i=1;i<n+1;++i)
  {
     cout << vec[i] << "\n";
  }
}
