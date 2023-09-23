#include <bits/stdc++.h>

using namespace std;

#define LOG(...) fprintf(stderr, __VA_ARGS__)
//#define LOG(...)
#define FOR(i, a, b) for(int i=(int)(a); i<(int)(b); ++i)
#define REP(i, n) for(int i=0; i<(int)(n); ++i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define EXIST(s, e) ((s).find(e)!=(s).end())
#define SORT(c) sort(ALL(c))
#define RSORT(c) sort(RALL(c))
#define SQ(n) (n) * (n)

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int MAX_VALUE = 1000007;
bool prime[MAX_VALUE];

int main() {
  FOR(i, 2, MAX_VALUE){
    if(prime[i]) continue;
    for(int j = i * 2; j<MAX_VALUE; j+=i)
      prime[j]=true;
  }

  int n;
  while(cin >> n) {
    int cnt = 0;
    FOR(i, 2, n + 1){
      if (!prime[i]) cnt++;
    }
    cout << cnt << endl;
  }
}