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

  deque<int> deq;
  int N;
  cin >> N;
  REP(i, N) {
    string command;
    cin >> command;
    if (command == "insert") {
      int k;
      cin >> k;
      deq.push_front(k);
    } else if (command == "delete") {
      int k;
      cin >> k;
      REP(i, deq.size()) {
	if (deq[i] == k) {
	  deq.erase(deq.begin() + i);
	  break;
	}
      }
    } else if (command == "deleteFirst") {
      deq.pop_front();
    } else {
      deq.pop_back();
    }
  }
  int i = 0;
  for (auto l : deq) {
    cout << l << (i == (int)deq.size() - 1 ? '\n' : ' ');
    i++;
  }
  return 0;
}