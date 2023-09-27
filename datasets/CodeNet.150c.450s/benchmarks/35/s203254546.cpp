#include<iostream>
#include<vector>

using namespace std;

int getMaxSum(vector<int> v)
{
	int sum,max;
	sum=v[0];
	max=v[0];
	for(int i=1;i<v.size();i++)
	{
		if(sum<0)
		{
			sum=0;
		}
		sum+=v[i];
		if(sum>max)
		{
			max=sum;
		}
	}
	return max;
}

int main(void)
{
	int n;
	while(cin>>n)
	{
		if(n==0)
		{
			break;
		}
		vector<int> v;
		for(int i=0;i<n;i++)
		{
			int tmp;
			cin>>tmp;
			v.push_back(tmp);
		}
		cout<<getMaxSum(v)<<endl;
	}
}