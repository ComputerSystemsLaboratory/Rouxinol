#include<iostream>
using namespace std;

#define turn(x1,y1,x2,y2,x3,y3) x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2)
int hantei(double ax,double ay,double bx,double by,double cx,double cy,double dx,double dy);
int main()
{
	int i;
	double xy[8];
	int ans;
	char a;
	
	for(;cin >> xy[0];)
	{
		for(i=1;i<8;i++)
			cin >> xy[i] ;
		
		ans=1;
		
		if(hantei(xy[0],xy[1],xy[2],xy[3],xy[4],xy[5],xy[6],xy[7])==0)
			ans=0;
		
		if(ans==1)
			printf("YES\n");
		else
			printf("NO\n");
	}
}

int hantei(double ax,double ay,double bx,double by,double cx,double cy,double dx,double dy)
{
	if((
		turn(ax,ay,bx,by,cx,cy)>0.0 &&
		turn(dx,dy,ax,ay,bx,by)>0.0 &&
		turn(dx,dy,bx,by,cx,cy)>0.0 &&
		turn(dx,dy,cx,cy,ax,ay)>0.0)
		||(
		turn(ax,ay,bx,by,cx,cy)<0.0 &&
		turn(dx,dy,ax,ay,bx,by)<0.0 &&
		turn(dx,dy,bx,by,cx,cy)<0.0 &&
		turn(dx,dy,cx,cy,ax,ay)<0.0)
	)
		return 1;
	else
		return 0;
}