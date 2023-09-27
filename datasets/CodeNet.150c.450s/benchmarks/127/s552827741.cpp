#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
#include<cstring>
#include<cmath>
#include<set>
#include<map>
#include<sstream>
using namespace std;
typedef long long ll;
int main()
{
	int n;
	cin>>n;
	while(n--)
	{
		string sss;
		set<string> ss;
		cin>>sss;
		string s,t,rs,rt;
		for(int i=1;i<sss.size();i++)
		{
			s=sss.substr(0,i);
			t=sss.substr(i);
			rt=t;
			rs=s;
			reverse(rt.begin(),rt.end());
			reverse(rs.begin(),rs.end());
			ss.insert(t+s);
			ss.insert(t+rs);
			ss.insert(rt+s);
			ss.insert(rt+rs);
			ss.insert(rs+rt);
			ss.insert(rs+t);
			ss.insert(s+rt);
			ss.insert(rs+rt);
			ss.insert(s+t);
		}
	cout<<ss.size()<<endl;
	}
	return 0;
}