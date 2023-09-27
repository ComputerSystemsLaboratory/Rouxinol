#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const int MOD = 1e9+7,MAX = 1e5;

int main()
{
	string s;
	cin >> s;
	stack<int> S1;
	stack<pair<int,int>> S2;
	int sum = 0;
	vector<int> ans;
	int n = s.size();
	for(int i = 0;i<n;i++)
	{
		if(s[i]=='\\')
		{
			S1.push(i);
			
		}
		else if(s[i]=='/'&&!S1.empty())
		{
			//S2.push(make_pair(S1.top(),S1.top()-i));
			int sum2 = 0;
			while(!S2.empty()&&!S1.empty()&&S2.top().first>S1.top())
			{
				
				sum2 += S2.top().second;
				S2.pop();
			}
			sum += i-S1.top();
			S2.push(make_pair(S1.top(),sum2+i-S1.top()));
			S1.pop();
			
		}
	}
	cout<<sum<<endl;
	cout<<S2.size();
	if(S2.size()!=0)cout<<' ';
	
	while (!S2.empty())
	{
		ans.push_back(S2.top().second);
		S2.pop();
	}
	for(int i = ans.size()-1;i>=0;i--)
	{
		if(i<ans.size()-1)cout<<' ';
		cout<<ans[i];
	}
	cout<<endl;
	
	return 0;
}
