#include <stdio.h>

int main(){
  int x[3000], y[3000];
  int i, count, temp=0;

  while (i<=3000) {
    scanf("%d %d", &x[i], &y[i]);

    if(x[i]==0&&y[i]==0)break;

    if(x[i]>y[i]){
      temp = y[i];
      y[i] = x[i];
      x[i] = temp;
    }

    count++;
    i++;
  }
  for(i = 0;i<count;i++){
    printf("%d %d\n", x[i], y[i]);
  }

  return 0;
}