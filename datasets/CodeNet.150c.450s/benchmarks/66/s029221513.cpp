#include<iostream>
#include<string>
#include<set>
using namespace std;
int main()
{
	int n,m;
	string u,t;
	set<string>s;
	for(cin>>n;n--;)
	{
		cin>>u;
		s.insert(u);
	}
	bool f=0;
	for(cin>>m;m--;)
	{
		cin>>t;
		if(s.find(t)==s.end())
			cout<<"Unknown ";
		else
		{
			if(f)cout<<"Closed by ";
			else cout<<"Opened by ";
			f=!f;
		}
		cout<<t<<endl;
	}
	return 0;
}