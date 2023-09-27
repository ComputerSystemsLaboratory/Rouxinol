#include <iostream>
#include <string>
#include <vector>
#define MAX 100000
using namespace std;

struct Process {
  string name;
  int time;
};

Process processes[MAX];
int head, tail, n;

bool isEmpty() {
  return head == tail;
}

bool isFull() {
  if (isEmpty()) return false;
  if (head < tail) {
    return head - tail == 1;
  } else {
    return head == 0 && tail == MAX - 1;
  }
}

void enqueue(Process p) {
  if (isFull()) {
    cout << "queue is full!";
    return;
  }
  processes[tail] = p;
  tail++;
  if (tail >= MAX) tail = 0;
}

Process dequeue() {
  if (isEmpty()) {
    throw "queue is empty!";
  }
  Process p = processes[head];
  head++;
  if (head >= MAX) head = 0;
  return p;
}

int main() {
  int n, q;
  int total = 0;
  int index = 0;
  head = 0;
  tail = 0;
  Process p;

  cin >> n >> q;

  for (int i = 0; i < n; i++) {
    cin >> p.name >> p.time;
    enqueue(p);
  }

  while (true) {
    p = dequeue();
    if (p.time <= q) {
      total += p.time;
      cout << p.name << " " << total << endl;
    } else {
      p.time -= q;
      enqueue(p);
      total += q;
    }
    if (isEmpty()) {
      break;
    }
  }

  return 0;
}