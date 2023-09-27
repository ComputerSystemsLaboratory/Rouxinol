#include <iostream>
#include<string>
using namespace std;
string tosmall(string s)
{
	for(int i=0;i<s.length();i++)if(s[i]>='A'&&s[i]<='Z')s[i]+='a'-'A';
	return s;
}

int main() {
	string s,in;cin>>s;s=tosmall(s);int c=0;
	while(cin>>in&&in!="END_OF_TEXT")
	{
		if(s==tosmall(in))c++;
	}
	cout<<c<<endl;
	return 0;
}