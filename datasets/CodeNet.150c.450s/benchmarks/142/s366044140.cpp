
#include <bits/stdc++.h>
#include <set>

using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++) 
#define ll long long
#define ld long double
#define repl(i, n) for (ll i = 0; i < (ll)(n); i++)  
#define outdeb(fir, sec, thr) cout << fir << ":" << sec << ":" << thr << endl
#define DEV_VAL 1000000007

string yesNo(bool val)
{
  if(val)
  {
    return "Yes";
  }
  else {
    return "No";
  }
}

int main()
{
  ll n,k;
  cin >> n >> k;
  vector<ll> ilist;
  repl(i, n)
  {
    ll tmp; cin >> tmp;
    ilist.push_back(tmp);
  } 
  for(ll i = k; i < n; i++)
  {
    cout << fixed << yesNo(ilist[i-k] < ilist[i]) << endl;
  }

  return 0;
}