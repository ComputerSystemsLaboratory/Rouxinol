#include<iostream>
#include<cstdio>
#include<string>
#include<set>
#include<cstring>

using namespace std;

int main()
{
	int m;
	char st[73];
	int i,j,k,len;
	
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		set<string> T;
		string s;
		cin >> s;
		len = s.length();
		for(j=1;j<len;j++)
		{
			string s1,s2;
			s1 = s.substr(0,j);
			s2 = s.substr(j);
			//puts(s1.c_str());
			//puts(s2.c_str());
			string s1riv,s2riv;
			for (int k=s1.length(); k>0; k--) s1riv+=s1.at(k-1);
			for (int k=s2.length(); k>0; k--) s2riv+=s2.at(k-1);
			//puts(s1riv.c_str());
			//puts(s2riv.c_str());
			T.insert(s1+s2);
			T.insert(s2+s1);
			T.insert(s1+s2riv);
			T.insert(s1riv+s2);
			T.insert(s2+s1riv);
			T.insert(s2riv+s1);
			T.insert(s1riv+s2riv);
			T.insert(s2riv+s1riv);
		}
		k = T.size();
		printf("%d\n",k);
	}
}