#include <iostream>
#include <string>
#include <cstdlib>
#include <cstdio>
using namespace std;

const int MAX = 100000;

typedef struct process{
  string name;
  int time;
} Process;

int head, tail;
Process q[MAX];

void initializa() { head = tail = 0; }

bool isEmpty() { return head == tail; }

bool isFull() { return head == (tail + 1) % MAX; }

void enqueue(Process p) {
  if (isFull()) {
    fprintf(stderr, "error: full\n");
    exit(1);
  }
  q[tail] = p;
  if (tail + 1 == MAX) tail = 0;
  else tail++;
}

Process dequeue() {
  if (isEmpty()) {
    fprintf(stderr, "error: empty\n");
    exit(1);
  }
  Process p = q[head];
  if (head + 1 == MAX) head = 0;
  else head++;
  return p;
}

int main() {
  int n, q, time = 0; 
  cin >> n >> q;
  for (int i = 0; i < n; i++) {
    string s1, s2;
    cin >> s1 >> s2;
    Process p;
    p.name = s1;
    p.time = atoi(s2.c_str());
    enqueue(p);
  }

  while (!isEmpty()) {
    Process p = dequeue();
    if (p.time > q) {
      time += q;
      p.time -= q;
      enqueue(p);
    } else {
      time += p.time;
      cout << p.name << " " << time << endl;
    }
  }
}