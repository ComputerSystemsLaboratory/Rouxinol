#include <iostream>
#include <queue>
#include <utility>
#include <string>
using namespace std;

int main() {
  int n, q;
  queue< pair<string, int> > tasks;
  
  cin >> n >> q;
  for (int i=0; i<n; i++) {
    pair<string, int> task;
    cin >> task.first >> task.second;
    tasks.push(task);
  }
  
  int time = 0;
  
  while (!tasks.empty()) {
    auto current = tasks.front(); tasks.pop();
    if (current.second > q) {
      time += q;
      current.second -= q;
      tasks.push(current);
    } else {
      time += current.second;
      cout << current.first << ' ' << time << endl;
    }
  }
}