#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;
typedef pair<int, int> P;
typedef pair<ll, ll> Pll;
typedef vector<int> Vi;
typedef tuple<int, int, int> T;
#define FOR(i,s,x) for(int i=s;i<(int)(x);i++)
#define REP(i,x) FOR(i,0,x)
#define ALL(c) c.begin(), c.end()
#define DUMP( x ) cerr << #x << " = " << ( x ) << endl

int main() {
  // use scanf in CodeForces!
  cin.tie(0);
  ios_base::sync_with_stdio(false);

  priority_queue<int> pque;
  while (true) {
    string command;
    cin >> command;
    if (command == "end") {
      break;
    } else if (command == "insert") {
      int k;
      cin >> k;
      pque.push(k);
    } else {
      cout << pque.top() << endl;
      pque.pop();
    }
  }
  return 0;
}