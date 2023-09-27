#include<bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	string u[n];
	for (int i = 0; i < n; ++i) cin>>u[i];
	int m;
	cin>>m;
	string t;
	bool open=0;
	for (int i = 0; i < m; ++i)
	{
		cin>>t;
		bool find=0;
		for (int j = 0; j < n; ++j) if(t==u[j]) find=1;
		if(find)
		{
			if(open) cout<<"Closed by "<<t<<endl,open=0;
			else cout<<"Opened by "<<t<<endl,open=1;
		}
		else cout<<"Unknown "<<t<<endl;
	}
	return 0;
}
