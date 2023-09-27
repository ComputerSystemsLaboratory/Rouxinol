#include <string>
#include <set>
#include <iostream>
using namespace std;
int main() 
{
	int n;
	string cmd;
	set<string> dic;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>cmd;
		if(cmd=="insert")
		{
			string temp;
			cin>>temp;
			dic.insert(temp);
		}
		else if(cmd=="find")
		{
			string temp;
			cin>>temp;
			if(dic.count(temp)==0)
				cout<<"no"<<endl;
			else
				cout<<"yes"<<endl;
		}
	}
}