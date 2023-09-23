#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
	int W,H,x,y,r;
	
	cin>>W>>H>>x>>y>>r;
	
	if(x<W&&y<H&&0<x&&0<y)
		if(r<=(W-x)&&r<=(H-y))
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	else
		cout<<"No"<<endl;
	
	return 0;
	
}