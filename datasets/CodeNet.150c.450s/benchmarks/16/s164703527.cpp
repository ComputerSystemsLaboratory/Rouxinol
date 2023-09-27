#include<algorithm>
#include<iostream>
#include<cstdlib>
#include<cstdio>
#include<string>
#include<vector>
#include<stack>
#include<queue>
#include<list>
using namespace std;

int main()
{
	stack<int> S;
	stack<pair<int,int>> T;
	vector<int> V;
	int t;
	char s[20010];int sum=0;
	for(int i=0;cin>>s[i];i++)
	{
		if(s[i]=='\\')
		{
			S.push(i);
		}
		else if(s[i]=='/')
		{
			if(!S.empty())
			{
				int j=S.top();S.pop();
				sum+=i-j;
				int a=i-j;
				for(;!T.empty()&&T.top().first>j;)
				{
					a+=T.top().second;T.pop();
				}
				T.push(make_pair(j,a));
			}
		}
	}
	cout<<sum<<endl;
	cout<<T.size();
	for(;!T.empty();V.push_back(T.top().second),T.pop());
	reverse(V.begin(),V.end());
	for(int i=0;i<V.size();i++)
	{
		cout<<" "<<V[i];
	}
	cout<<endl;
	return 0;
}