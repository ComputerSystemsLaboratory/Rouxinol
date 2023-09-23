#include<stdio.h>

void swap(int x, int y) {   
	int tempX = x;    int tempY = y;   
	x = tempY;    y = tempX;}
int gcd(int x,int y){
/*int n,d ;
n=x;
if (y<x){n=y;y=x;x=n;}
    for(int i=n;i>0;i--)
        if(x%i==0&&y%i==0){d=i;break;}
 */
int r;
	 if (x < y)
        swap(x, y);
    while (y > 0){
        r = x % y;
        x = y;
		y = r;}



            return x;
}


int main()
{
int x,y,r;
r=0;
scanf("%d %d",&x,&y);
r=gcd(x,y);
printf("%d\n",r);
return 0;
}