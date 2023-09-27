#include<stdio.h>
int main(){

   int x,y,i;

   for(i=0;i<3000;i++){
      scanf("%d %d",&x,&y);

      if(x==0&&y==0){

          break;

      }


      if(x<=y){
         printf("%d %d\n",x,y);
      }else if(x>y){
         printf("%d %d\n",y,x);
      }
            }

   return 0;

}