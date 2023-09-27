#include <stdio.h>

int main() {
  int data_sets[100000];
  int i, last=1;

  while(i<=100000){
    scanf("%d", &data_sets[i]);
    if(data_sets[i] == 0)break;
    last++;
    i++;
  }

  for(i=1;i<last;i++){
    printf("Case %d: %d\n", i,data_sets[i-1]);
  }
  return 0;
}