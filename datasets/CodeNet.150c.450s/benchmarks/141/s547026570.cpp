#include<iostream>
#include<cmath>
#include<algorithm>
#include<utility>
using namespace std;
double x,y;
bool cross(double a,double b,double c,double d)
{
	return (c-a)*(y-b)-(x-a)*(d-b)>0;
}
int main()
{
	double a,b,c,d,e,f;
	for(;cin>>a>>b>>c>>d>>e>>f>>x>>y;)
	{
		int cnt=0;
		cnt+=cross(a,b,c,d);
		cnt+=cross(c,d,e,f);
		cnt+=cross(e,f,a,b);
		cout<<(cnt==0||cnt==3?"YES":"NO")<<endl;
	}
}

