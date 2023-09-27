#include <iostream>
#include <string>

using namespace std;

struct Process {
  string name;
  int time;
};

const int LEN = 100005;
Process p_queue[LEN];
int head, tail, n;

void enqueue(Process p) {
  p_queue[tail] = p;
  tail = (tail + 1 ) % LEN;
}

Process dequeue() {
  Process p = p_queue[head];
  head = (head + 1) % LEN;
  return p;
}

int min(int a, int b) {
  return a < b ? a : b;
}

int main() {
  int q;
  int total_time = 0, c;
  Process u;

  cin >> n;
  cin >> q;

  for (int i = 1; i <= n; i++) {
    string name;
    cin >> name;
    int time;
    cin >> time;

    p_queue[i].name = name;
    p_queue[i].time = time;
  }
  head = 1;
  tail = n + 1;

  while (head != tail) {
    u = dequeue();
    c = min(q, u.time);
    u.time -= c;
    total_time += c;
    if (u.time > 0) {
      enqueue(u);
    } else {
      cout << u.name << " " << total_time << endl;
    }
  }

  return 0;
}