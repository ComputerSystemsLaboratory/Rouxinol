#include<iostream>

using namespace std;

int main()
{
	int ans=0,ss=0;
	int i,a;
	
	for(i=0;i<4;i++)
	{
		cin >> a ;
		ans+=a;
	}
	for(i=0;i<4;i++)
	{
		cin >> a ;
		ss+=a;
	}
	if(ans>ss)
		cout << ans << endl;
	else
		cout << ss << endl;
}