#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a,b;
	int i,j=0;
	vector<int> ans;
	char c;
	
	while(1)
	{
	cin>>a>>c>>b;
	if(c=='?') break;
	else if(c=='+') ans.push_back(a+b);
	else if(c=='-') ans.push_back(a-b);
	else if(c=='*') ans.push_back(a*b);
	else if(c=='/') ans.push_back(a/b);
	j++;
	}
	
	for(i=0;i<j;i++)
	{
		cout<<ans[i]<<endl;
	}
}

