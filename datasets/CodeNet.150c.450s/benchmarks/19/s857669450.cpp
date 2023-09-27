#include<cstdio>
int main(){
  for(int i=0;i<10000;i++){
	  int x,y;
	  scanf("%d%d",&x,&y);
	  if(x==0&&y==0){
		  break;
	  }
	  if(x<y){
      printf("%d %d\n",x,y);
	  }else{
	  printf("%d %d\n",y,x);
   }
  }
}