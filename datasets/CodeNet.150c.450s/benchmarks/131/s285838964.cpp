#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cstdio>
#include<cmath>
#include<map>
#include<numeric>
#include<queue>
#include<set>
#include<sstream>
#include<stack>
#include<string>
#include<tuple>
#include<utility>
#include<vector>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef vector<int> vi;

#define rep(i, a, n)  for(int i=a; i<n; i++)
#define REP(i, n)  for(int i=0; i<(int)(n); i++)
#define REPS(i, n)  for(int i=1; i<=(int)(n); i++)
#define PER(i, n) for(int i=(int)(n)-1; i>= 0; i--)
#define PERS(i, n)  for(int i=(int)(n)-1; i>0; i--)
#define FOR(i, c) for(__typeof((c).begin()) i = (c).begin(); i!=(c).end(); i++)
#define RFOR(i, c)  for(__typeof((c).rbegin()) i=(c).rbegin(); i!=(c).end(); i++)
#define ALL(container)  (container).begin(), (container).end()
#define RALL(container) (container).rbegin(), (container).rend()
#define SZ(container) (container).size()
#define FILL0(n)  setfill('0') << right << setw(n)
#define mp(a, b)  make_pair(a, b)
#define toLower(c)  c+0x20
#define toUpper(c)  c-0x20
#define pb  push_back
#define eb  emplace_back

const int INF = 1<<28;
const int MOD = 1000000007;

int main(){
  int N = 20;
  while(true){
    int n, l; cin >> n >> l;
    if(n+l == 0)  break;
    vector<int> dif(N+1);
    dif[0] = n;
    REPS(i, N){
      int max_n, min_n;
      string s = to_string(dif[i-1]);
      if(s.length()<l)  {
        string adds(l-s.length(), '0');
        s = adds+s;
      }
      sort(ALL(s));
      min_n = stoi(s);
      sort(RALL(s));
      max_n = stoi(s);
      dif[i]=max_n-min_n;
    }
    int ansi, ansj;
    rep(j, 0, N+1) {
      bool find = false;
      rep(i, j+1, N+1){
        if(dif[i]==dif[j]){
          ansj = j;
          ansi = i;
          find = true;
          break;
        }
      }
      if(find)  break;
    }
    cout << ansj << " " << dif[ansi] << " " << ansi - ansj << endl;
  }
  return 0;
}

