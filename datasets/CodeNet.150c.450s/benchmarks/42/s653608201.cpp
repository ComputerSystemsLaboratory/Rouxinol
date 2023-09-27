#include <iostream>
#include <queue>
#include <vector>

using namespace std;

namespace {

struct Process {
  char name[10];
  // required time to process this task.
  int time;
  int id;
  // last modified time
  int timestamp;
};

class ProcessComparator {
 public:
  bool operator()(const Process* a, const Process* b) const {
    return (a->timestamp == 0 && a->timestamp == b->timestamp) ?
        a->id > b->id : a->timestamp >= b->timestamp;
  }
};

inline int min(int a, int b) {
  return a < b ? a : b;
}

} // namespace

int main() {
  using Queue = priority_queue<Process*, vector<Process*>,
                               ProcessComparator>;
  Queue queue;
  vector<Process *> backstore;

  int n;
  int q;
  cin >> n >> q;
  for (int i = 0; i < n; ++i) {
    auto p = new Process;
    cin >> p->name >> p->time;
    p->id = i;
    p->timestamp = 0;
    backstore.push_back(p);
    queue.push(p);
  }

  int current_time = 0;
  while (!queue.empty()) {
    auto p = queue.top();
    queue.pop();

    const int used = min(p->time, q);
    p->time -= used;
    current_time += used;
    if (p->time <= 0) {
      cout << p->name << " " << current_time << endl;
      continue;
    }
    p->timestamp = current_time;
    queue.push(p);
  }

  for (auto p : backstore)
    delete p;
  return 0;
}