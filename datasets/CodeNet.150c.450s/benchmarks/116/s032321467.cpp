#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n,m,i,j,ss,ans;
	vector<int> num;
	
	for(;;)
	{
		cin >> n >> m ;
		
		if(n==0 && m==0)
			break;
		
		num.clear();
		ss=0;
		
		for(i=0;i<n;i++)
		{
			int a;
			cin >> a ;
			num.push_back(a);
		}
		
		for(i=0;i<m;i++)
		{
			ss+=num[i];
		}
		
		ans=ss;
		m--;
		
		for(i=1;i<n-m;i++)
		{
			ss-=num[i-1];
			ss+=num[i+m];
			if(ans<ss)
			{
				ans=ss;
			}
		}
		
		cout << ans << endl;
	}
}