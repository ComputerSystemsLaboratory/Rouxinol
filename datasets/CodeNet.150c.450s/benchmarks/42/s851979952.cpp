#include<stdio.h>

#define LIM 1000001
struct Process {
  char name[11];
  int time;
};
Process A[LIM];


class Queue {
  int head, tail;
  public:
  Queue() {
    head = 0;
    tail = 0;
  }
  void enqueue(Process p) {
    A[tail] = p;
    tail = (tail + 1) % LIM;
  }
  Process dequeue() {
    Process p = A[head];
    head = (head + 1) % LIM;
    return p;
  }
  bool empty() {
    return head == tail;
  }
};
int main() {
  int n, q, sum = 0;
  Process p;
  Queue queue;

  scanf("%d %d", &n, &q);

  for ( int i = 0; i < n; i++ ) {
    scanf("%s %d", p.name, &p.time);
    queue.enqueue(p);
  }

  while(!queue.empty()) {
    p = queue.dequeue();
    bool running_out = p.time <= q;
    if (running_out) {
      sum += p.time;
      printf("%s %d\n", p.name, sum);
    } else {
      p.time -= q;
      sum += q;
      queue.enqueue(p);
    }
  }

  return 0;
}

