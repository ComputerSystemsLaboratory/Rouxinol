#include<iostream>

using namespace std;

int main()
{
	int n,i;
	int ans[64]={0};
	
	ans[0]=ans[1]=1;
	ans[2]=2;
	
	for(i=3;i<31;i++)
	{
		ans[i]=ans[i-1]+ans[i-2]+ans[i-3];
	}
	
	for(;;)
	{
		cin >> n ;
		if(n==0)
			break;
		cout << ans[n]/3650+1 << endl;
		
	}
}