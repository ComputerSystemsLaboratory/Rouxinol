#include <stdio.h>
int main(){
  int count,i,j,n,y,m,d,M[11]={0,21,20,21,20,21,20,21,20,21,20};
 
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    count=0;
    scanf("%d%d%d",&y,&m,&d);
     
    while(1){
      if(y%3!=0){
    count++;
    d++;
    if(d==M[m]){
      m++;
      d=1;
    }
    if(m==11){
      m=1;
      y++;
    }
    if(y==1000&&m==1&&d==1){
      break;
    }
      }else{
    count++;
        d++;
        if(m%2==0){
      if(d==M[m]+1){
        m++;
        d=1;
      }
      if(m==11){
        m=1;
        y++;
      }
      if(y==1000&&m==1&&d==1){
        break;
      }
    }else{
      if(d==M[m]){
        m++;
        d=1;
      }
      if(m==11){
        m=1;
        y++;
      }
      if(y==1000&&m==1&&d==1){
        break;
      }
    }
      }
    }
    printf("%d\n",count);
  }
  return 0;
}