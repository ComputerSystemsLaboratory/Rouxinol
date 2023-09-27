#include<iostream>
#include<iomanip>
#include<cmath>
#include<string>
#include<cstring>
#include<vector>
#include<list>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<stack>
using namespace std;
typedef long long ll;
#define fi first
#define se second
#define mp make_pair
#define rep(i, n) for(int i=0;i<n;++i)
#define rrep(i, n) for(int i=n;i>=0;--i)
const int inf=1e9+7;
const ll mod=1e9+7;
const ll big=1e18;
const double PI=2*asin(1);

int N;
ll bit[200005];

void add(ll x) {
  while(x<=N) {
    bit[x]++;
    x += x & -x;
  }
}

ll sum(ll x) {
  ll ans = 0;
  while(x>0) {
    ans += bit[x];
    x -= x & -x;
  }
  return ans;
}

int main() {
  cin>>N;
  ll A[N];
  vector<ll> arr(N);
  map<ll, int> amap;
  for(int i=0;i<N;++i) {
    cin>>A[i];
    arr[i] = A[i];
  }
  sort(arr.begin(), arr.end());
  for(int i=0;i<N;++i) {
    amap[arr[i]] = i+1;
  }
  for(int i=0;i<N;++i) {
    A[i] = amap[A[i]];
  }
  ll ans = 0;
  for(int i=0;i<N;++i) {
    ans += i - sum(A[i]);
    add(A[i]);
  }
  cout<<ans<<endl;
}


