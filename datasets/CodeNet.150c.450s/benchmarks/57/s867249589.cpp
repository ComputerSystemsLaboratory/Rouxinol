#include <iostream>
#include<vector>
using namespace std;

int main() {
	vector<int> ans;
	int a,b,co=0;
	char s;
	while(1)
	{
		cin>>a>>s>>b;
		if(s=='?')break;
		co++;
		if(s=='+')ans.push_back(a+b);
		else if(s=='-')ans.push_back(a-b);
		else if(s=='*')ans.push_back(a*b);
		else ans.push_back(a/b);
	}
	for(a=0;a<co;a++)cout<<ans[a]<<endl;
	return 0;
}