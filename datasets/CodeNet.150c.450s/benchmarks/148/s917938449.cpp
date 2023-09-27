#include <bits/stdc++.h>
using namespace std;

#define ll long long

signed main()
{
  int n; cin >> n;
  int a=0,w=0,t=0,r=0;
  string ans;
  for(int i=0; i<n; ++i)
  {
    cin >> ans;
    if(ans=="AC") ++a;
    else if(ans=="WA") ++w;
    else if(ans=="TLE") ++t;
    else if(ans=="RE") ++r;
  }
  cout << "AC x " << a << endl;
  cout << "WA x " << w << endl;
  cout << "TLE x " << t << endl;
  cout << "RE x " << r << endl;
}