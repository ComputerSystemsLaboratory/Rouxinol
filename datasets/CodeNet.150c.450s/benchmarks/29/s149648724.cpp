#include <bits/stdc++.h>
#define REP(i, a, n) for(ll i = ((ll) a); i < ((ll) n); i++)
using namespace std;
typedef long long ll;

int main(void) {
  cin.tie(0);
  ios::sync_with_stdio(false);

  ll N; cin >> N;
  deque<ll> q;
  REP(i, 0, N) {
    string C; ll X; cin >> C;
    if(C == "insert" || C == "delete") cin >> X;

    if(C == "insert") {
      q.push_front(X);
    }
    if(C == "delete") {
      deque<ll> _q;
      bool f = false;
      while(q.size()) {
        if(q.front() != X || f) {
          _q.push_back(q.front());
        } else if(!f) {
          f = true;
        }
        q.pop_front();
      }
      swap(q, _q);
    }
    if(C == "deleteFirst") {
      q.pop_front();
    }
    if(C == "deleteLast") {
      q.pop_back();
    }
  }

  while(q.size()) {
    cout << q.front() << (q.size() != 1 ? " " : "\n");
    q.pop_front();
  }
}