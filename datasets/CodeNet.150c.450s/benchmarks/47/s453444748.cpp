#include<iostream>
using namespace std;
int inrec(int w,int h,int x,int y)
{
	if ((x>=0&&x<=w)&&(y>=0&&y<=h))
		return 0;
	else 
		return 1;
}
int main()
{
	int x,y,r,w,h;
	int flag;
	cin>>w>>h>>x>>y>>r;
	flag=inrec(w,h,x-r,y)+inrec(w,h,x+r,y)+inrec(w,h,x,y-r)+inrec(w,h,x,y+r);
	if (flag==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;	
	return 0;
}
