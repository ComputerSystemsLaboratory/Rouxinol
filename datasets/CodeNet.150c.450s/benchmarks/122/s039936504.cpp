#include <bits/stdc++.h>
using namespace std;
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)

int main() {
  priority_queue<int> q;
  while (1) {
    string que; cin >> que;
    if (que == "end") break;

    if (que == "insert") {
      int num; cin >> num;
      q.push(num);
    } else {
      cout << q.top() << endl;
      q.pop();
    }
  }
}

