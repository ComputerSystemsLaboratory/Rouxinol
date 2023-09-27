#include <bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<(int)b;i++)
#define rep(i,n) REP(i,0,n)
#define all(c) (c).begin(), (c).end()
#define zero(a) memset(a, 0, sizeof a)
#define minus(a) memset(a, -1, sizeof a)
#define watch(a) { cout << #a << " = " << a << endl; }
template<class T1, class T2> inline bool minimize(T1 &a, T2 b) { return b < a && (a = b, 1); }
template<class T1, class T2> inline bool maximize(T1 &a, T2 b) { return a < b && (a = b, 1); }
template<class T> void operator>> (istream& ist, vector<T>& vs) { for(auto& e: vs) cin >> e; }

typedef long long ll;
int const inf = 1<<29;

int main() {

  int M, N[2];
  for(; cin >> M >> N[0] >> N[1] && M;) {
    vector<int> vs(M); cin >> vs;
    int maxgap = 0;
    int maxnum = -1;
    REP(num, N[0], N[1] + 1) {
      if(maxgap <= vs[num - 1] - vs[num]) {
        maxgap = vs[num - 1] - vs[num];
        maxnum = num;
      }
    }

    cout << maxnum << endl;
  }
  
  return 0;
}