#include<stdio.h>

int main(){
  int m,f,r,i,j;

  while(1){
    scanf("%d %d %d",&m,&f,&r);

    if(m==-1&&f==-1&&r==-1)break;

    if(m==-1||f==-1){
      printf("F\n");
      continue;
    }
    int sum=m+f;

    if(sum>=80)printf("A\n");
    else if(sum<80&&sum>=65)printf("B\n");
    else if(sum<65&&sum>=50)printf("C\n");  
    else if(sum<50&&sum>=30){
      if(r>=50)printf("C\n");
      else printf("D\n");
    }
    else if(sum<30)printf("F\n");
  }

  return 0;
}