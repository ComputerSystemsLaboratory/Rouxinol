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
#define endl '\n'
#define mod 1000000007
#define INF 100000000
#define fk first
#define sv second

const int dx[] = {1, 0, -1, 0, 1, 1, -1, -1}, dy[] = {0, 1, 0, -1, 1, -1, 1, -1};

template<typename T>
void print(const std::vector<T>& v, char sep=' ') {
  for (int i = 0; i < (int)v.size(); i++) {
    if (i != 0) cout << sep;
    cout << v[i];
  }
  cout << endl;
}

int main()
{
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n;
  int a, b;
  a = b = 0;
  cin >> n;

  REP(i, n){
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 > s2) a += 3;
    else if (s1 < s2) b += 3;
    else {
      a++;
      b++;
    }
  }
  cout << a << ' ' << b << endl;
}