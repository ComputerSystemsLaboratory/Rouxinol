#include<stdio.h>
int main(){
           int a,b,c,x,y,z;
           scanf("%d %d %d",&a,&b,&c);
           if(a<b){
                   x=a;
                   y=b;
           }else{
                 x=b;
                 y=a;
           }
           if(y<c){
                   z=c;
           }else{
                 z=y;
                 y=c;
           }
           if(x<y){
                   printf("%d %d %d\n",x,y,z);
           }else{
                 printf("%d %d %d\n",y,x,z);
           }
           return 0;
}