#include <bits/stdc++.h>
using namespace std;
#define int long long
#define mod 1000000007
#define deb(x) cerr << "\n" \
                    << #x << "=" << x << "\n";
#define deb2(x, y) cerr << "\n"                   \
                        << #x << "=" << x << "\n" \
                        << #y << "=" << y << "\n";
#define w(x) \
  int x;     \
  cin >> x;  \
  while (x--)

int32_t main()
{
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  int n,k;
  cin>>n>>k;
  vector<int> v(n);
  for(int &i:v)
    cin>>i;
  int cur = 1;
  
  for(int i = k;i<n;i++) {
    if(v[i-k]<v[i])
      cout<<"Yes\n";
    else cout<<"No\n";
  }
  return 0;
}