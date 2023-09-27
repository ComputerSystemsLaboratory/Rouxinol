#include<stdio.h>
int main(){
  int a,ten[100],i,max=0,min=1000,sum=0,ave=0;

  while(1){
    max=0;
    min=1000;
    sum=0;
    ave=0;
    scanf("%d",&a);
    if(a==0)break;
    else{
      for(i=0;i<a;i++){
	scanf("%d",&ten[i]);
      }
      for(i=0;i<a;i++){
	if(max<ten[i]){
	  max=ten[i];
	}
      }
      for(i=0;i<a;i++){
	if(min>ten[i]){
	  min=ten[i];
	}
      }
      
      for(i=0;i<a;i++){
	sum+=ten[i];
      }
      ave=(sum-max-min)/(a-2);
      printf("%d\n",ave);
    }
  }


return 0;
}