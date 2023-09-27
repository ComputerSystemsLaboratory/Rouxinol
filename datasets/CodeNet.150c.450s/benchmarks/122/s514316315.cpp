#include <queue>
#include <stdio.h>
#include <string>

using namespace std;

int main(void) {
  priority_queue<int> PQ;
  
  int target;
  char command[8];
  
  while(1) {
    scanf("%s", command);
    if(command[0] == 'e' && command[1] == 'n') {
      break;
    }
    if(command[0] == 'i') {
      scanf("%d", &target);
      PQ.push(target);
    }
    else {
      printf("%d\n", PQ.top());
      PQ.pop();
    }
  }

  return 0;
}