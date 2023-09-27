#include <stdio.h>

int main(){
  int i, count = 0;
  int a[20000], b[20000];
  char op[20000];
  
  while (i<=20000) {
    scanf("%d %c %d", &a[i], &op[i], &b[i]);
    if(op[i]=='?') break;
    count++;
    i++;
  }
  for(i=0;i<=count;i++){
    if(op[i] == '*'){
      printf("%d\n", a[i]*b[i]);
    }else if(op[i] == '+'){
      printf("%d\n", a[i]+b[i]);
    }else if(op[i] == '/'){
      printf("%d\n", a[i]/b[i]);
    }else if(op[i] == '-'){
      printf("%d\n", a[i]-b[i]);
    }else{}
  }
  return 0;
}