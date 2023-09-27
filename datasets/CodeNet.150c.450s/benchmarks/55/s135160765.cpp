#include <iostream>
using namespace std;
int main()
{
	string s;
	while(cin>>s,s!="0"){
		int sum=0;
		for(int i=0;i<s.size();i++) sum+=(int)s[i]-(int)'0';
	cout<<sum<<endl;
	}
	return 0;
}