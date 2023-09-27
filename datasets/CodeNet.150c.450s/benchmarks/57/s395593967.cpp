#include<stdio.h>

int main(){
  int a,b,i,j,x[10000];
  char op;
  for(i=0;i<10000;i++){
    scanf("%d %c %d",&a,&op,&b);
    if(op=='+'){
      x[i]=a+b;
    }
    else if(op=='-'){
      x[i]=a-b;
    }
    else if(op=='*'){
      x[i]=a*b;
    }
    else if(op=='/'){
      x[i]=a/b;
    }
    else{
      break;
    }
  }
  for(j=0;j<i;j++){
    printf("%d\n",x[j]);
  }
  return 0;
}