#include<iostream>

using namespace std;

int main()
{
	int n;
	
	for(;;)
	{
		cin >> n ;
		if(n==0)
			break;
		
		int ans=0;
		
		int a;
		a=1000-n;
		ans+=a/500;
		a%=500;
		ans+=a/100;
		a%=100;
		ans+=a/50;
		a%=50;
		ans+=a/10;
		a%=10;
		ans+=a/5;
		a%=5;
		ans+=a/1;
		a%=1;
		
		cout << ans << endl;
	}
}