#include <cstdio>
#include <queue>
using namespace std;

int main() {
  priority_queue<int> que;
  char str[128];
  while(scanf("%s", str) && str[2] != 'd') {
    if(str[0] == 'i') {
      int key;
      scanf("%d", &key);
      que.push(key);
    } else {
      printf("%d\n", que.top());
      que.pop();
    }
  }
}