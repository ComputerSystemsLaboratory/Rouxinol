#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i=0;i<n;++i)
	{
		cin >> a[i];
	}

	vector<int> dp(n);
	dp[0]=a[0];
	//for (int i=1;i<n;++i)
	//{
	//	dp[i]=-1;
	//}

	int count=1;
	for (int i=1;i<n;++i)
	{
		// lookup first dp[j]>a[i]
		if (dp[count-1]<a[i])
		{
			dp[count]=a[i];
			++count;
			continue;
		}

		int minimum=0;
		int maximum=count-1;
		while (maximum-minimum>1)
		{
			int mid=(maximum+minimum)/2;
			if (dp[mid]>a[i])
			{
				maximum=mid;
			}
			else if (dp[mid]==a[i])
			{
				break;
			}
			else
			{
				minimum=mid;
			}
		}
	
		if (maximum-minimum<=1)
		{
			if (dp[minimum]>a[i])
			{
				dp[minimum]=a[i];
			}
			else if  (dp[minimum]<a[i]) 
			{
				dp[maximum]=a[i];
			}
		}
	}
	cout << count << endl;

#ifdef NEVER_DEFINED
	for (int i=0;i<count;++i)
	{
		cout << ' ' << dp[i];
	}
	cout << endl;
#endif
}









