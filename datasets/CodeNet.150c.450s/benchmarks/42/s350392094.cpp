#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100000 + 5;

struct process {
  string name;
  int time;
};

process Q[MAXN];
int head, tail;
int n, q, total_time = 0;

void enqueue(process x) {
  Q[tail] = x;
  tail++;
  tail %= MAXN;
}

process dequeue() {
  process x = Q[head];
  head++;
  head %= MAXN;
  return x;
}

bool isEmpty() {
  return head == tail;
}

int main() {
  cin >> n >> q;
  for (int i = 0; i < n; i++) {
    cin >> Q[i].name >> Q[i].time;
  }
  head = 0, tail = n;
  while (!isEmpty()) {
    process crt = dequeue();
    int need = min(crt.time, q);
    crt.time -= need;
    total_time += need;
    if (crt.time == 0) {
      cout << crt.name << " " << total_time << endl;
    } else {
      enqueue(crt);
    }
  }
  return 0;
}