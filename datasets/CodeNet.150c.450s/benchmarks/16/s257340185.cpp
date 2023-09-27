#include<bits/stdc++.h>

using namespace std;

int main()
{
	vector<int> ans;
	stack<int> st;
	ans.clear();
	while(!st.empty()) st.pop();
	static bool used[20020];
	memset(used,false,sizeof(used));
	int t=0,tot=0;
	static char str[20020];
	scanf("%s",str);
	for(int i=0;str[i]!=0;i++)
		if(str[i]=='\\') st.push(i);
		else if(str[i]=='/'&&!st.empty()) st.pop();
	while(!st.empty())
	{
		used[st.top()]=true;
		st.pop();
	}
	for(int i=0;str[i]!=0;i++)
		if(str[i]=='\\'&&!used[i]) st.push(i);
		else if(str[i]=='/'&&!st.empty()) 
		{
			t+=i-st.top();
			st.pop();
			if(st.empty())
			{
				tot+=t;
				ans.push_back(t);
				t=0;
			}
		}
	printf("%d\n",tot);
	printf("%d%c",ans.size(),ans.size()==0?'\n':' ');
	for(int i=0;i<ans.size();i++)
		printf("%d%c",ans[i],i+1==ans.size()?'\n':' ');
	return 0; 
}