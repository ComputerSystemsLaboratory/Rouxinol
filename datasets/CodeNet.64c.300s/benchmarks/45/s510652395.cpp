#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int n,m,p;
	while(cin>>n>>m>>p,n) 
	{
		int nums[n];
		fill(nums,nums+n,0);
		int sum=0;
		for(int i = 0; i < n; ++i)
		{
			cin>>nums[i];
			sum+=nums[i]*100;
		}

		double ans=0;
		if(nums[m-1]!=0)
			ans=sum*0.01*(100-p)/nums[m-1];
		cout<<(int)ans<<endl;
	}
  return 0;
}