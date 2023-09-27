#include<stdio.h>
int n,r,p,c,i,deck[100],temp[100];

int main(){
  while(1){
    scanf("%d %d",&n,&r);
    if( n==0 && r==0)break;
    for( i = 1; i <=n; i++){
      deck[i] = n - i + 1;
    }
    while(r>0){
      r--;
      scanf("%d %d",&p,&c);
      for( i = 1; i < p; i++){
	temp[i]=deck[i];
      }
      for(i = p ; i < p + c; i++){
	deck[i-p+1] = deck[i];
      }
      for( i = 1; i < p; i++){
	deck[i+c] = temp[i];
      }
    }
    printf("%d\n",deck[1]);
  }
  return 0;
}