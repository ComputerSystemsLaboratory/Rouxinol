#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<functional>
#include<string>
#include<cstring>
#include<cmath>
#include<sstream>
using namespace std;
int  main()
{
	int L,ans;
	string s;
	vector<string> cnt;
	while(cin>>s>>L)
	{
	if(L==0)return 0;
	cnt.push_back(s);
	for(int i=1;i<=20;i++)
	{
		//L=s.size();
		int mmax=0,mmin=0;
		//string mm,mi;
		while(s.size()<L)
		{
			s+='0';
		}
		sort(s.begin(),s.end());
		//cout<<s<<endl;
		for(int j=0;j<L;j++)
		{
			if(s[j]=='0'&&j==0)
			{
				continue;
			}
			else if(s[j]!='0')
			{
				mmin+=pow(10,(L-j-1))*(s[j]-'0');
			}
			else if(s[j]!='0')
			{
				mmin+=pow(10,(L-j-1));
			}
			
			//cout<<s[j]-'0'<<endl;
		}
		for(int j=L-1;j>=0;j--)
		{
			if(s[j]=='0'&&j==0)
			{
				continue;
			}
			else if(s!="0")
			{
				mmax+=pow(10,(j))*(s[j]-'0');
			}
		}
		//cout<<mmax<<" "<<mmin<<endl;
		ans=mmax-mmin;
		//cout<<ans<<endl;
		stringstream ss;
		ss<<ans;
		s=ss.str();
	//	A:
		if(count(cnt.begin(),cnt.end(),s))
		{
			
			int num=0;
			for(int k=0;k<cnt.size();k++)
			{
				if(s==cnt[k])
				{
					num=k;
					break;
				}
			}
			cout<<num<<" "<<s<<" "<<i-num<<endl;
			break;
		}
		cnt.push_back(s);
		//s.clear();
	}
	//A:;
	if(!cnt.empty())cnt.clear();
	}
	return 0;
}