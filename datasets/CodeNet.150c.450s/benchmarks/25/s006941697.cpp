#include <iostream>
#include<string>
using namespace std;

int main() {
	string s;
	int a[26]={};
	for(;cin>>s;)
	for(int i=0;i<s.length();i++)
	{
		if(s[i]>='a'&&s[i]<='z')a[s[i]-'a']++;
		else if(s[i]>='A'&&s[i]<='Z')a[s[i]-'A']++;
	}
	for(int i=0;i<26;i++)
	{
		cout<<(char)('a'+i)<<" : "<<a[i]<<endl;
	}
	return 0;
}