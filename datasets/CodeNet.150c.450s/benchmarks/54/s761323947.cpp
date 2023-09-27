#include "bits/stdc++.h"
using namespace std;
string target;

string toUpper(string s){
	target="";
	for (int i = 0; i < s.length(); ++i) {
		target+=toupper(s[i]);
	}
	return target;
}


int main() {
string s,c;
string a;
cin>>s;
s=toUpper(s);
int ans=0;
for (int i = 0; i < 1002; ++i) {
	cin>>a;
	if(a=="END_OF_TEXT"){break;}
	a=toUpper(a);
	if(a==s){ans++;}
}
cout<<ans<<endl;
}