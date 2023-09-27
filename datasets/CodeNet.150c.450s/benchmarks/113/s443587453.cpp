#include<cstdio>
int main(){
  for(int i=0;i<10000;i++){
	  int x;
	  scanf("%d",&x);
	  if(x==0){
		  break;
	  }
  printf("Case %d: %d\n",i+1,x);
  }
}