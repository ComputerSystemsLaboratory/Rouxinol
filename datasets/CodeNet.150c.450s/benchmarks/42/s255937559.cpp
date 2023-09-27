#include <iostream>
#include <string>
#include <deque>
using namespace std;

struct Process
{
  string name;
  int    time;
};

int main(void)
{
  int N;
  int Q;
  Process p;
  deque<Process> que;
  int time = 0;

  cin >> N >> Q;
  
  for (int i=0; i<N; ++i) {
    cin >> p.name >> p.time;
    que.push_back(p);
  }
  
  while (!que.empty()) {
    p = que.front();
    que.pop_front();
    if (p.time <= Q) {
      time += p.time;
      cout << p.name << " " << time << endl;
    } else {
      time += Q;
      p.time -= Q;
      que.push_back(p);
    }
  }
  return 0;
}