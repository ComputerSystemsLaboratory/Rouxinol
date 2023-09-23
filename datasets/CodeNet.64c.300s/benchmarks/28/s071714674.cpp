#include<stdio.h>

int main(void)
{

int num[5];
int W,H,x,y,r;
int i;

for(i=0;i<5;i++){
scanf("%d",&num[i]);
}
W=num[0];
H=num[1];
x=num[2];
y=num[3];
r=num[4];

if(x-r<0||x+r>W||y-r<0||y+r>H){
printf("No\n");
}
else if(x-r>=0&&x+r<=W&&y-r>=0&&y+r<=H){
printf("Yes\n");
}

return 0;
}