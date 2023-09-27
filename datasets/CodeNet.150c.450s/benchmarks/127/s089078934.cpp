#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdio>
#include<cmath>
#include<queue>
#include<stack>
#include<map>
#include<set>

using namespace std;

typedef long long ll;
typedef pair<int,int> pii;
typedef pair<pii,int> piii;
typedef pair<ll,ll> pll;

#define reps(i,f,n) for(int i = int(f); i <= int(n); i++)
#define rep(i,n) reps(i,0,int(n)-1)
#define rrep(i,n) for(int i = n-1; i >= 0; i--)

#define all(x) (x).begin(),(x).end()
#define X first
#define Y second

#define sz size()
#define eb emplace_back

map<string,int> a;

int main(void){
  int n, l;
  string s, t, r;
  string rt, rr;

  cin >> n;
  rep(i,n){
      a.clear();
      cin >> s;
      l = s.size();
      a[s] = 1;
      rep(j,l+1){
          t = s.substr(0,j);
          rt = s.substr(0,j);
          r = s.substr(j, l-j);
          rr = s.substr(j, l-j);
          reverse(rt.begin(), rt.end());
          reverse(rr.begin(), rr.end());
          //a.insert(t)
          a[t+r] = 1;
          a[t+rr] = 1;
          a[rt+r] = 1;
          a[rt+rr] = 1;

          a[r+t] = 1;
          a[rr+t] = 1;
          a[r+rt] = 1;
          a[rr+rt] = 1;
      }
      cout << a.size() << endl;  
  }

  return 0;
}