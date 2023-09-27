#include<stdio.h>

int table[101];

int main(void) {
  int target;

  int num = 0;
  int max = 0;
  while(scanf("%d", &target) != EOF) {
    table[target]++;
    num++;
    if(max < table[target]) {
      max = table[target];
    }
  }
  for(int i = 1; i < 101; i++) {
    if(table[i] == max) {
      printf("%d\n", i);
    }
  }
  return 0;
}
  