#include<iostream>

using namespace std;

int main()
{
	int n,i,j;
	int sum;
	int ans[1024]={0};
	
	
	for(i=1;i+i+1<1001;i++)
	{
		sum=i+i+1;
		for(j=i+2;sum<1001;j++)
		{
			ans[sum]++;
			sum+=j;
		}
	}
	
	for(;;)
	{
		cin >> n ;
		if(n==0)
			break;
		cout << ans[n] << endl;
	}
}