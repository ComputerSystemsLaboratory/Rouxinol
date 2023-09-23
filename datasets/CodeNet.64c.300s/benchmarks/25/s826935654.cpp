#include<stdio.h>
int main(){
  int i=0;
  int data[4];
  while(scanf("%d",&data[i])!=EOF){
    int i,j,hit=0,blow=0;
    int str[4]={0};
    for(i=1;i<4;i++){
      scanf("%d",&data[i]);
    }
    for(i=0;i<4;i++){
      scanf("%d",&str[i]);
    }
    for(i=0;i<4;i++){
      for(j=0;j<4;j++){
	if(data[i]==str[j]){
	  if(data[j]==str[j]){
	    hit++;
	  } else{
	    blow++;
	  }
	}
      }
    }
    printf("%d %d\n",hit,blow);
  }
  return(0);
}