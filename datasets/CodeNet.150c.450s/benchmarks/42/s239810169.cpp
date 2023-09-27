#include <bits/stdc++.h>
using namespace std;
#define LEN 100010

typedef struct pp {
  char name[100];
  int t;
} P;

P Q[LEN];
int head, tail;

void enqueue(P x) {
  Q[tail] = x;
  if (tail + 1 == LEN) {
    tail = 0;
  }
  else {
    tail++;
  }
}

P dequeue() {
  P x = Q[head];
  if(head + 1 == LEN) {
    head = 0;
  }
  else {
    head++;
  }
  return x;
}

int main() {
  // Input
  int n, q;
  cin >> n >> q;
  
  for (int i = 1; i <= n; i++) {
    cin >> Q[i].name >> Q[i].t;
  }
  head = 1;
  tail = n + 1;
  
  // Compute
  int time_cnt = 0;
  P process;
  while (head != tail) {
    process = dequeue();
    
    time_cnt += min(process.t, q);
    if (process.t <= q) {
      cout << process.name << " " << time_cnt << endl;
    }
    else {
      process.t -= q;
      enqueue(process);
    }
  }
}
