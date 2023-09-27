#include <stdio.h>
int main(void)
{
	int W,H,x,y,r,ff;
	bool f;
	f=true;
	ff=0;
	W=H=x=y=r=0;
	scanf("%d",&W);scanf("%d",&H);scanf("%d",&x);scanf("%d",&y);scanf("%d",&r);
	if(W-x<r)ff=1;//f=false;
	if(x<r)ff=1;//f=false;
	if(H-y<r)ff=1;//f=false;
	if(y<r)ff=1;//f=false;
	if(ff==0)printf("Yes\n");
	else printf("No\n");
	return 0;
}