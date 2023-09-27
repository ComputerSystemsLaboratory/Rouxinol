#include <stdio.h>
int main(){
  
  int player[51] = {0};
  int n,p,pool=0,i;
  for(;;){
  scanf("%d %d",&n,&p);

  if(n==0&&p==0){
    break;
  }
  pool=p;
  i=0; 
  for(;;){
    for(i=0;i<=n-1;i++){
      if(pool==0){
	pool=player[i];
	player[i]=0;
	continue;
      }
      if(pool==1&&player[i]==p-1){
	break;
      }

      if (pool!=0){
	pool=pool-1;
	player[i]+=1;
      }
    }
    if(pool==1&&player[i]==p-1){
      break;
    }
    i++;
  }
  printf("%d\n",i);
  pool=0;
  player[i]=0;
  }
  return 0;
}