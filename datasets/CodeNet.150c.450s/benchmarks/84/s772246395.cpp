#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7,MAX = 1e5;

int arr[200001],cost[200001];

void marge_sort(int l,int r)
{
	if(r-l==1)return;
	int mid = (l+r)/2;
	marge_sort(l,mid);
	marge_sort(mid,r);
	vector<int> v,c;
	int i = l,j = mid;
	int add = mid - l;
	while(i!=mid&&j!=r)
	{
		if(arr[i]<arr[j])
		{
			v.push_back(arr[i]);
			c.push_back(cost[i]);
			add--;
			i++;
		}
		else
		{
			v.push_back(arr[j]);
			c.push_back(cost[j]+add);
			j++;
		}
	}
	for(;i<mid;i++)
	{
		v.push_back(arr[i]);
		c.push_back(cost[i]);
	}
	for(;j<r;j++)
	{
		v.push_back(arr[j]);
		c.push_back(cost[j]);
	}
	for(int k = l;k<r;++k)
	{
		arr[k] = v[k-l];
		cost[k] = c[k-l];
	}

}

int main()
{
	int n;
	cin >> n;
	for(int i =0;i<n;i++)cin >> arr[i];
	marge_sort(0,n);
	//for(int i =0;i<n;i++)cout<<arr[i]<<endl;
	ll ans = 0;
	for(int i = 0;i<n;i++)
	{
		ans += cost[i];
	}
	cout<<ans<<endl;
	
	return 0;
}
