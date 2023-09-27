#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int x,y,z;
	cin>>x>>y>>z;
	if(x<=y && y<=z ) cout<<x<<" "<<y<<" "<<z<<endl;
	else if(x<=y && y>=z && x<=z) cout<<x<<" "<<z<<" "<<y<<endl;
	else if(x>=y && x>=z && y<=z) cout<<y<<" "<<z<<" "<<x<<endl;
	else if(x>=y && x<=z && y<=z) cout<<y<<" "<<x<<" "<<z<<endl;
	else if(z<=y && z<=x && y<=x) cout<<z<<" "<<y<<" "<<x<<endl;
	else if(z<=x && x<=y && z<=y) cout<<z<<" "<<x<<" "<<y<<endl;
	return 0;
}
