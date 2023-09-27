#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string a[10]={""," .,!?","cabcabcabcab","fdefdefdefde","ighighighigh"
					,"ljkljkljkljk","omnomnomnomn","spqrspqrspqr","vtuvtuvtuvtu","zwxyzwxyzwxy"};
	int n;
	cin>>n;
	while(n)
	{
		string s;
		cin>>s;
		for (int i = 0; i < s.size(); ++i)
		{
			char c=s.at(i);
			if(c=='0') continue;
			else
			{
				int b=0;
				while(s.at(i)==c) ++i,++b;
				if(c=='1') cout<<a[1].at(b%5);
				else cout<<a[c-'0'].at(b%12);
			}
		}
		cout<<endl;
		--n;
	}
	return 0;
}
