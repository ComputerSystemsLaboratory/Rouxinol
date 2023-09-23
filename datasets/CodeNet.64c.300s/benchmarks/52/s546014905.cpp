#include<iostream>

using namespace std;

int ans,n,s;

void search(int num,int sum,int st)
{
	if(num==0)
	{
		if(sum==s)
			ans++;
		return;
	}
	for(int i=st;i<10;i++)
	{
		search(num-1,sum+i,i+1);
	}
	return;
}

int main()
{
	for(;;)
	{
		cin >> n >> s;
		if(n==0 && s==0)
			break;
		ans=0;
		search(n,0,0);
		cout << ans << endl;
	}
}