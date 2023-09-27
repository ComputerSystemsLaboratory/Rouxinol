#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(cin>>s){
		int i,c=0;
		if(s[0]=='0')break;
		for(i=0;i<s.size();i++)c+=s[i]-'0';
		cout<<c<<endl;
	}
}