#include<stdio.h>
int main(){
  int m,f,r,b=0,i,c;
  char a,e[999]={0};
  while(1){
    scanf("%d %d %d",&m,&f,&r);
    c=m+f;
    if(m==-1&&f==-1&&r==-1){
      break;
    }
    if(m==-1||f==-1){
      a='F';
    }
    else{
      if(c>=80){
    a='A';
      }
      else if(c>=65){
    a='B';
      }
      else if(c>=50){
    a='C';
      }
      else if(c>=30&&r>=50){
    a='C';
      }
      else if(c>=30&&r<50){
    a='D';
      }
      else if(c<30){
    a='F';
      }
    }
    e[b]=a;
    b++;
  }
  for(i=0;i<b;i++){
    printf("%c\n",e[i]);
  }
}