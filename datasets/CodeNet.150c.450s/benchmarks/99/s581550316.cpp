#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int dec(string s)
{
	int ans=0;
	int co=1;
	for(int i = 0; i < s.size(); ++i)
	{
		if(s[i]=='m')
		{
			ans+=co*1000; co=1;
		}
		else if(s[i]=='c')
		{
			ans+=co*100;
			co=1;
		}
		else if(s[i]=='x')
		{
			ans+=co*10;
			co=1;
		}
		else if(s[i]=='i')
		{
			ans+=co;
			co=1;
		}
		else co=s[i]-'0';
	}
	return ans;
}

string enc(int n)
{
	char s[1001];
	s[1]='i'; s[10]='x'; s[100]='c'; s[1000]='m';
	int pos=1;
	string ans="";
	while(n)
	{
		int tmp=n%10;
		n/=10;
		if(tmp==0)
		{	
			pos*=10;
			continue;
		}
		else
		{
			if(tmp==1) ans+=s[pos];
			else 
			{
				ans+=s[pos];
				ans+=tmp+'0';
			}
		}
		pos*=10;
	}
	reverse(ans.begin(),ans.end());
	return ans;
}

int main()
{
	int n;
	cin>>n;
	while(n--) 
	{
		string s1,s2;
		cin>>s1>>s2;
		cout<<enc(dec(s1)+dec(s2))<<endl;
	}
  return 0;
}