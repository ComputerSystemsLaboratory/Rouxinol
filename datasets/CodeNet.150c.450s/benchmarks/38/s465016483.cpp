#include<iostream>
using namespace std;
int main()
{
	int N,a,b,c;
	cin>>N;
	while(N--)
	{
		cin>>a>>b>>c;
		if(a+b>c&&a+c>b&&b+c>a&&a-b<c&&b-c<a&&c-b<a&&a*b*c!=0)
		{
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a)
			cout<<"YES"<<endl;
			else cout<<"NO"<<endl;
		}
		else cout<<"NO"<<endl;
	}
	return 0;
}