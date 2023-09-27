#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

struct Process {
  char name[11];
  unsigned short time;
  int remaining;

  Process* next;
  Process* prev;
};

class Queue {
 public:
  Queue() : first_(NULL), last_(NULL), size_(0) {}

  bool Empty() const {
    return size_ == 0;
  }

  Process* Pop() {
    if (!first_) {
      return NULL;
    }
    Process* r = first_;
    first_ = first_->next;
    --size_;
    return r;
  }

  void Push(Process* p) {
    ++size_;
    if (!first_) {
      first_ = p;
    }
    if (!last_) {
      last_ = p;
      return;
    }
    p->prev = last_;
    last_->next = p;
    p->next = NULL;
    last_ = p;
  }

 private:
  Process* first_;
  Process* last_;
  int size_;
};

void RoundRobin(int quantum, vector<Process>& processes) {
  Queue q;
  for (size_t i = 0; i < processes.size(); ++i) {
    q.Push(&processes[i]);
  }

  int elapsed = 0;
  while (!q.Empty()) {
    Process* p = q.Pop();

    // evict
    if (p->remaining - quantum <= 0) {
      elapsed += p->remaining;
      p->remaining = 0;
      printf("%s %d\n", p->name, elapsed);
      continue;
    }
    p->remaining -= quantum;
    elapsed += quantum;
    q.Push(p);
  }
}

int main() {
  int n, q;
  cin >> n;
  cin >> q;

  vector<Process> processes;
  Process p;
  for (int i = 0; i < n; ++i) {
    cin >> p.name;
    cin >> p.time;
    p.remaining = p.time;
    p.next = NULL;
    p.prev = NULL;
    processes.push_back(p);
  }

  RoundRobin(q, processes);

  return 0;
}