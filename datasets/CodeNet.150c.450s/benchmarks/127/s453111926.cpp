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
ll d[200010],dp[300][300];
char field[200][200];

string reverse(string str){
  string res = "";
  pel(i,str.sz-1,0)res += str[i];
  return res;
}

int main(){
  int p;
  cin >> p;
  while(p--){
    vector<char> vec;
    map<string,int> ans;
    cin >> s;
    rep(i,0,s.sz)vec.pb(s[i]);
    rep(i,0,vec.sz-1){
      // create train
      s = "",t = "";
      lep(j,0,i)s += vec[j];
      rep(j,i+1,vec.sz)t += vec[j];
      // link and reverse
      string train = s + t;
      if(ans[train] == 0 && ans[reverse(train)] == 0)ans[train]++;
      train = s + reverse(t);
      if(ans[train] == 0 && ans[reverse(train)] == 0)ans[train]++;
      train = reverse(s) + t;
      if(ans[train] == 0 && ans[reverse(train)] == 0)ans[train]++;
      train = reverse(s) + reverse(t);
      if(ans[train] == 0 && ans[reverse(train)] == 0)ans[train]++;
      // puts("");
    }
    print(ans.sz);
  }
  return 0;
}
