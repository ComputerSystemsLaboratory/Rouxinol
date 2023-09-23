#include <stdio.h>

int main ()


{


int a=0;


int W,H,x,y,r=0;


scanf("%d %d %d %d %d",&W,&H,&x,&y,&r);


if(x-r>=0&&x+r<=W){


if(y-r>=0&&y+r<=H){


a=1;


}


}


else{


a=0;


}


if(a==1){


printf("Yes\n");


}


else if(a==0){


printf("No\n");


}


return 0;


}