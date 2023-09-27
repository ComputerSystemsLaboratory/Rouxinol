#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;cin>>n;
	for(;n--;)
	{
		double a,b,c,d,e,f,g,h;cin>>a>>b>>c>>d>>e>>f>>g>>h;
		cout<<(abs((d-b)*(g-e)-(h-f)*(c-a))<1e-10?"YES":"NO")<<endl;
	}
}

