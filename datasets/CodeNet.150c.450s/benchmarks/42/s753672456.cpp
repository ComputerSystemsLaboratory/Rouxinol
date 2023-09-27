#include <string>
#include <queue>
#include <iostream>
using namespace std;

int main() {
  int n,q; // n:number of process, q:quantum
  int timer = 0;
  queue<string> name;
  queue<int> time;
  cin >> n >> q;
  for (int i=0;i<n;++i) {
    string bufn; int buft;
    cin >> bufn >> buft;
    name.push(bufn);
    time.push(buft);
  }
  while (!time.empty()) {
    if (time.front()<=q) {
      timer += time.front();
      cout << name.front() << " " << timer << endl;
      name.pop(); time.pop();
    }
    else {
      name.push(name.front());
      time.push(time.front()-q);
      name.pop(); time.pop();
      timer += q;
    }
  }
}