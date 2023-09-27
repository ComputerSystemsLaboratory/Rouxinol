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
const ll mod1=998244353;
const ll big=1e18;
const double PI=2*asin(1);

int main() {
  int N;
  cin>>N;
  map<int, int> amap;
  for(int x=1;x<=100;++x) {
    for(int y=1;y<=100;++y) {
      for(int z=1;z<=100;++z) {
        amap[x*x+y*y+z*z+x*y+y*z+z*x]++;
      }
    }
  }
  for(int i=1;i<=N;++i) cout<<amap[i]<<endl;
}

