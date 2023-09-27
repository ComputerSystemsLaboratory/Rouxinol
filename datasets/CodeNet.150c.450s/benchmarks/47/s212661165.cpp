#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int m,h,x,y,r;
	cin>>m>>h>>x>>y>>r;
	if (x>=m || x<=0 || y>=h || y<=0) cout<<"No"<<endl;
	else if(x+r>m || y+r>h) cout<<"No"<<endl;
	else cout<<"Yes"<<endl;
	return 0;
}
