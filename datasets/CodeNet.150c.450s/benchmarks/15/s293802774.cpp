#include <stdio.h>

int main(){
  int i,j,s[10003],n,q,k=0,t;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&s[i]);
  }
  scanf("%d",&q);
  for(i=0;i<q;i++){
    scanf("%d",&t);
    for(j=0;j<n;j++){
      if(s[j]==t){
	k++;
	break;
      }
    }
  }
  printf("%d\n",k);
  return 0;
}