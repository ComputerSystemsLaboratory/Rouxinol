#include<stdio.h>
int main(){
  char m;
  int a,b,c[256],i,j;
  for(i=0;i>-1;i++){
    scanf("%d %c %d",&a,&m,&b);
    if(m=='?'){
      break;
    }
    if(m=='+'){
      c[i]=a+b;
    }
    if(m=='-'){
      c[i]=a-b;
    }
    if(m=='*'){
      c[i]=a*b;
    }
    if(m=='/'){
      c[i]=a/b;
    }
  }
  for(j=0;j<i;j++){
    printf("%d\n",c[j]);
  }
  return(0);
}