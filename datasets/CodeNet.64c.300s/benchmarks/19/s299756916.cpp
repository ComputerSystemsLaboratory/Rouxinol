#include<iostream>

using namespace std;

int n;
int sum[5000];
int ans;

void serch(int s_i,int s_ans)
{
	if(s_i==n)
		return ;
	
	s_ans+=sum[s_i];
	
	if(ans<s_ans)
		ans=s_ans;
	
	serch(s_i+1,s_ans);
}
int main()
{
	
	for(;;)
	{
		ans=-10000000;
		
		cin >> n ;
		if(n==0)
			break;
		
		for(int i=0;i<n;i++)
		{
			cin >> sum[i] ;
		}
		
		for(int i=0;i<n;i++)
		{
			serch(i,0);
		}
		
		cout << ans << endl;
	}
}