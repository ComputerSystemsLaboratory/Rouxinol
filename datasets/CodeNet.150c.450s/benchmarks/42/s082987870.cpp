#include <queue>
#include <iostream>
using namespace std;
int main () {
  int n,q;
  int time = 0;
  queue<int> Q,Qout;
  queue<string> P,Pout;
  cin >> n;
  cin >> q;
  while (n>0) {
    string N;
    int T;
    cin >> N;
    cin >> T;
    P.push(N);
    Q.push(T);
    n--;
  }
  while (! P.empty()) {
    int T;
    T = Q.front();
    Q.pop();
    if (T>q) {
      T -= q;
      Q.push(T);
      P.push(P.front());
      P.pop();
      time += q;
    }
    else {
      time += T;
      cout << P.front() << " " << time << endl;
      P.pop();
    }
  }
}
      