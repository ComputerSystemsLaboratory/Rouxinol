#include <bits/stdc++.h>
using namespace std;

typedef long int lint;
typedef long long int llint;
typedef pair<int, int> pii;
typedef pair<int, string> pis;
typedef pair<long, long> pll;

#define EACH(i, c) for (__typeof((c).begin()) i = (c).begin(); i != (c).end(); ++i)
#define ALL(c) (c).begin(), (c).end()
#define FOR(i, s, e) for (int i = (s); i < (int)(e); ++i)
#define REP(i, n) FOR(i, 0, n)
#define endl "\n"

const int INF = 1000000;
const int dx[4] = {1, 0, -1, 0}, dy[4] = {0, 1, 0, -1};

template<typename T>
void print(const std::vector<T>& v, char sep=' ') {
  for (int i = 0; i < (int)v.size(); i++) {
    if (i != 0) cout << sep;
    cout << v[i];
  }
  cout << endl;
}

int prime[INF];

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);

  int n;

  REP(i, INF) prime[i] = 1;

  prime[0] = prime[1] = 0;

  for (int i =  2; i * i <= INF; i++){
    if (prime[i]){
      for (int j = 2; i * j <= INF; j++){
        prime[i * j] = 0;
      }
    }
  }

  while (cin >> n){
    int ct = 0;
    for (int i = 2; i <= n; i++){
      if (prime[i]) ct++;
    }
    cout << ct << endl;
  }
}