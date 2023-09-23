#include<stdio.h>

int main(){
  int m,f,r;
  int i,j;
  int e[1000];
  for(i=0;i<1000;i++){
    scanf("%d %d %d",&m,&f,&r);
    if(m<0&&f<0&&r<0){
      break;
    }
    else if(m<0||f<0){
      e[i]=0;
    }
    else if(r<0){
      if(m+f>=80){
        e[i]=1;
      }
      else if(m+f>=65){
        e[i]=2;
      }
      else if(m+f>=50){
        e[i]=3;
      }
      else if(m+f>=30){
        e[i]=4;
      }
      else{
        e[i]=0;
      }
    }
    else{
      if(r>=50){
        e[i]=3;
      }
      else if(m+f>=30){
        e[i]=4;
      }
      else{
        e[i]=0;
      }
    }
  }
  for(j=0;j<i;j++){
    switch(e[j]){
      case 0:printf("F\n");break;
      case 1:printf("A\n");break;
      case 2:printf("B\n");break;
      case 3:printf("C\n");break;
      case 4:printf("D\n");break;
    }
  }

  return 0;
}