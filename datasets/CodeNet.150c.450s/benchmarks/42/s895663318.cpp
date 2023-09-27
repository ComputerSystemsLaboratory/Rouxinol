#include <iostream>
#include <string>
using namespace std;

struct process {
  string name;
  int time;
};

int n, q, head = 1, tail = 0;
process Q[100010];

void enqueue(process p) {
  Q[tail] = p;
  if (tail >= n) tail = 0;
  else tail++;
}

process dequeue(void) {
  process ret = Q[head];
  if (head >= n) head = 0;
  else head++;
  return ret;
}

int main(void) {
  cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    process p;
    cin >> p.name >> p.time;
    Q[i] = p;
  }

  int _time = 0;
  while (head != tail) {
    process p = dequeue();
    // cout << p.name << " " << p.time << endl;
    if (p.time <= q) {
      _time += p.time;
      cout << p.name << " " << _time << endl;
    } else {
      p.time -= q;
      _time += q;
      enqueue(p);
    }
  } 
  return 0;
}