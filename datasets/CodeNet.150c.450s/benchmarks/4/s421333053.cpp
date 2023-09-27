#include<stdio.h>
int main( )
{
  while(1){
    int m,f,r;
    scanf("%d %d %d",&m,&f,&r);
    if(m==-1&&f==-1&&r==-1){
      break;
    }
    else if(m==-1||f==-1){
      printf("F\n");
      continue;
    }
    else if(m+f>=80){
      printf("A\n");
      continue;
    }
    else if(m+f>=65){
      printf("B\n");
      continue;
    }
    else if(m+f>=50){
      printf("C\n");
      continue;
    }
    else if(m+f>=30&&r<50){
      printf("D\n");
      continue;
    }
    else if(m+f>=30&&r>=50){
      printf("C\n");
      continue;
    }
    else printf("F\n");
  }
  return 0;
}