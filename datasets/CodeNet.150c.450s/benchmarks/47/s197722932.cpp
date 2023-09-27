#include<stdio.h>

int main(void)


{


 int W,H,x,y,r;


 scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);


 if(W<x+r||x-r<0||H<y+r||y-r<0){


    printf("No\n");


 }else{


    printf("Yes\n");


 }


 return 0;


}