#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <algorithm>
#include <functional>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <bitset>
#include <tuple>
#include <complex>
#include <cassert>
#include <exception>
#include <iomanip>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<ll,ll> P;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<char> vc;
typedef vector<string> vs;
typedef vector<P> vp;
#define rep(i,a,n) for(ll i = (a);i < (n);i++)
#define per(i,a,n) for(ll i = (a);i > (n);i--)
#define lep(i,a,n) for(ll i = (a);i <= (n);i++)
#define pel(i,a,n) for(ll i = (a);i >= (n);i--)
#define clr(a,b) memset((a),(b),sizeof(a))
#define pb push_back
#define mp make_pair
#define all(c) (c).begin(),(c).end()
#define sz size()
#define print(X) cout << (X) << "\n"
static const int INF = 1e+9+7;
ll n,m,l;
string s,t;
ll d[200010],dp[3000][3000];
char field[200][200];

ll max_p[1000010],min_p[1000010];

void func(){
  max_p[0] = min_p[0] = 0;
  rep(i,1,1000010){
    min_p[i] = max_p[i] = i;
    rep(j,1,1000010){
      // 正四面体
      ll test = j * (j + 1) * (j + 2) / 6;
      // インデックス
      if(i - test < 0)break;
      min_p[i] = min(min_p[i] ,min_p[i - test] + 1);
      if(test % 2)max_p[i] = min(max_p[i],max_p[i - test] + 1);
    }
  }
}

int main(){
  func();
  while(cin >> n,n){
    cout << min_p[n] << " " << max_p[n] << endl;
  }
  return 0;
}
