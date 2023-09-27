#include <stdio.h>


int main(){

  int i,j,n,q,c = 0;
  long s[10026];
  long t[512];


  scanf("%d",&n);
  for(i = 0;i < n;i++) scanf("%d",&s[i]);
  scanf("%d",&q);
  for(j = 0;j < q;j++) scanf("%d",&t[j]);


  for(j = 0;j < q;j++){
    for(i = 0;i < n;i++){
      if(s[i] == t[j]){
	//printf("s = %d,t = %d\n",s[i],t[j]);
	c++;
	break;
      }
    }
  }

  printf("%d\n",c);

  return 0;
}