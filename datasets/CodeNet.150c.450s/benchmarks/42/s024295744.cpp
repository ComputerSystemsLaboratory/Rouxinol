#include <algorithm>
#include <iostream>
using namespace std;
static const int MAX = 100001;

struct task {
  char name[10];
  int time;
};

struct task que[MAX];
int head = 0;
int tail = 0;

int increment(int p) { return (p + 1) % MAX; }

void enqueue(struct task t) {
  que[tail] = t;
  tail = increment(tail);
}

struct task dequeue() {
  int pre = head;
  head = increment(head);
  return que[pre];
}

bool isEmpty() { return tail == head; }

int main() {
  int n, q;
  cin >> n;
  cin >> q;
  struct task t;
  for (int i = 0; i < n; i++) {
    cin >> t.name;
    cin >> t.time;
    enqueue(t);
  }

  int elaps;
  int total = 0;
  while (!isEmpty()) {
    t = dequeue();
    elaps = min(t.time, q);
    t.time -= elaps;
    total += elaps;
    if (t.time > 0) {
      enqueue(t);
    } else {
      cout << t.name << " ";
      cout << total << endl;
    }
  }
}