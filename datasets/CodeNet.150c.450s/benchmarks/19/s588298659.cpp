#include <stdio.h>
int main(void){
int x=1,y=1;
while(true){
scanf("%d %d",&x,&y);
if(x==0&&y==0) break;
if(x>y){printf("%d %d\n",y,x);}
else{printf("%d %d\n",x,y);}

}
return 0;
}