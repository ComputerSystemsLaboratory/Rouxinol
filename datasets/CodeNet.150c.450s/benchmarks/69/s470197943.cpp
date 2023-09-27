#include<vector>
#include<iostream>
using namespace std;
const int maxn=15;
int sum[maxn];
bool check(int i,vector<int> &left,vector<int> &right)
{
	int a=left.size()-1,b=right.size()-1;
	if(i==10&&left[a-1]<left[a]&&right[b-1]<right[b])
		return true;
	if(a>=1)
	{
		if(left[a-1]<left[a])
		{
	left.push_back(sum[i]);
	if(check(i+1,left,right))
		return true;
		}
		else
			return false;
	}
	else
	{
		left.push_back(sum[i]);
	if(check(i+1,left,right))
		return true;
	}
	left.pop_back();
	if(b>=1)
	{
		if(right[b-1]<right[b])
		{
			right.push_back(sum[i]);
	if(check(i+1,left,right))
		return true;
		}
		else
			return false;
	}
	else
	{
	right.push_back(sum[i]);
	if(check(i+1,left,right))
		return true;
	}
	right.pop_back();
	return false;
}
int main()
{
	int N;
	cin>>N;
	while(N--)
	{
		vector<int> left,right;
		for(int i=0;i<10;i++)
			cin>>sum[i];
		if(check(0,left,right))
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	return 0;
}