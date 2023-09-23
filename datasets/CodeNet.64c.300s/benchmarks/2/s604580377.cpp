#include<stdio.h>
int main(){
  const int N_RANK=5;
  const char rank[]="FDCBA";
  const int border[N_RANK+1]={0,30,50,65,80,101};
  int i,m,f,r;
  while(1){
    scanf("%d %d %d",&m,&f,&r);
    if(m==-1&&f==-1&&r==-1)break;
    else if(m==-1||f==-1){
      printf("%c\n",rank[0]);
      continue;
    }
    for(i=0;i<N_RANK;i++){
      if((m+f)>=border[i]&&(m+f)<border[i+1]){
        if(i==1&&r>=50){
          printf("%c\n",rank[i+1]);
          break;
        }
        else printf("%c\n",rank[i]);
      }
    }
  }
  return 0;
}