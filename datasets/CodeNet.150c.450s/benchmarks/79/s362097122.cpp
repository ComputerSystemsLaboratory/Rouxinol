#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;
typedef vector<ll> VL;
typedef vector<VL> VVL;
typedef pair<int, int> PII;

#define FOR(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) FOR(i, 0, n)
#define ALL(x) x.begin(), x.end()
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359
#define EPS 1e-12

int main(void)
{
  while(true) {
    int n, r;
    cin >> n >> r;
    if(n == 0 && r == 0) break;
    vector<int> card;
    REP(i, n) card.push_back(i+1);
    REP(i, r) {
      int p, c;
      cin >> p >> c;
      vector<int> temp;
      REP(i, c) temp.push_back(card[n-c-p+i+1]);
      card.erase(card.begin()+n-c-p+1, card.begin()+n-p+1);
      REP(i, c) card.push_back(temp[i]);
    }

    cout << card[n-1] << endl;
  }

  return 0;
}