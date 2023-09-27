#include <iostream>
#include<string>
using namespace std;

int main() {
	string s,a;
	cin>>s>>a;s+=s;
	for(int i=0;i<=s.length()-a.length();i++)
	{
		if(s.substr(i,a.length())==a)
		{
			cout<<"Yes"<<endl;
			return 0;
		}
	}
	cout<<"No"<<endl;
	return 0;
}