#include <iostream>
#include <sstream>
#include <string>
#include <queue>
using namespace std;

struct process {
  int time;
  string name;
};

int main() {
  int n; // num_of_process
  int q; // quantum

  queue<process> que;
  cin >> n >> q;
  for(int i=0;i<n;i++) {
    process p;
    cin >> p.name >> p.time;
    que.push(p);
  }

  int ms = 0; // time count
  while(!que.empty()) {
    process p = que.front();
    que.pop();
    if(p.time > q) {
      p.time = p.time - q;
      ms += q;
      que.push(p);
    }
    else {
      ms += p.time;
      cout << p.name << " " << ms << endl;
    }
  }
}