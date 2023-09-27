#include <iostream>
#include <stdio.h>
#include <queue>
#include <string>
using namespace std;
  
class Task {
public:
  void input() {
    scanf("%s %d\n", name, &time);
  }
  char name[10];
  int time;
};
  
int main() {
  int n, q;
  queue<Task> tasks;
  
  cin >> n >> q;
  for (int i=0; i<n; i++) {
    auto task = Task();
    task.input();
    tasks.push(task);
  }
  
  int time = 0;
  
  while (!tasks.empty()) {
    auto current = tasks.front(); tasks.pop();
    if (current.time > q) {
      time += q;
      current.time -= q;
      tasks.push(current);
    } else {
      time += current.time;
      cout << current.name << ' ' << time << endl;
    }
  }
}