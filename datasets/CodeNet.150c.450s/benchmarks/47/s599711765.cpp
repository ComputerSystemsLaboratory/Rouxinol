#include <stdio.h>
  
int main(){
  
int W,H,x,y,r;
  
scanf("%d",&W);
scanf("%d",&H);
scanf("%d",&x);
scanf("%d",&y);
scanf("%d",&r);


if(W<=x || H<=y){
    printf("No\n");
}
else if(x<r || y<r){
    printf("No\n");
}
       else{
    printf("Yes\n");
}
}