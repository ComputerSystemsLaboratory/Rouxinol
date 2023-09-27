#include <iostream>
#include <list>
#include <string>
using namespace std;
  
class Task {
public:
  void input() {
    cin >> name >> time;
  }
  string name;
  int time;
};
  
int main() {
  int n, q;
  list<Task> tasks;
  
  cin >> n >> q;
  for (int i=0; i<n; i++) {
    auto task = Task();
    task.input();
    tasks.push_back(task);
  }
  
  list<Task>::iterator current;
  int time = 0;
  
  while ((current = tasks.begin()) != tasks.end()) {
    if (current->time > q) {
      time += q;
      current->time -= q;
      tasks.splice(tasks.end(), tasks, current);
    } else {
      time += current->time;
      cout << current->name << " " << time << endl;
      tasks.erase(current);
    }
  }
}