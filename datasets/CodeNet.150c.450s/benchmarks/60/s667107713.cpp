#include<stdio.h>

int main(){
  int i,j,n,k,c,b;

  int a[124][124]={{}};

  scanf("%d",&n);
  for(i=0;i<n;i++){

    scanf("%d %d",&c,&b);
    for(j=0;j<b;j++){
      scanf("%d",&k);
      a[c-1][k-1]=1;

    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j!=0){
	printf(" ");
      }
       printf("%d",a[i][j]);
    
    }
    
    puts("");
 
}
  return 0;
}