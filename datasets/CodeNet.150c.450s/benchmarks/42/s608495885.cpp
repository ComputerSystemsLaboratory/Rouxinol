#include <cstdio>
#include <queue>

class processTime {
public:
  int time;
  char name[12];
}; 

int n;
int q;
std::queue<processTime> processQueue;

void solve() {
  int time = 0;

  while (!processQueue.empty()) {
    processTime pt = processQueue.front(); processQueue.pop();
    if (pt.time <= q) {
      time += pt.time;
      printf("%s %d\n", pt.name, time);
    } else {
      time += q;
      pt.time -= q;
      processQueue.push(pt);
    }
  }
}

int main() {
  scanf("%d %d", &n, &q);
  for (int i=0; i<n; i++) {
    processTime pt;
    scanf("%s", pt.name);
    scanf("%d", &(pt.time));
    processQueue.push(pt);
  }

  solve();
}