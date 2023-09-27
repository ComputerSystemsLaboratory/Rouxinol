#include <bits/stdc++.h>
using namespace std;

int main(){
	int i;
	string s;
	getline(cin,s);
	for(i=0;i<s.size();i++){
		if('a'<=s[i]&&s[i]<='z') s[i]-=32;
		else if('A'<=s[i]&&s[i]<='Z') s[i]+=32;
		cout<<s[i];
	}
	cout<<endl;
	return 0;
}

