#include <bits/stdc++.h>
using namespace std;
int main(){
	while(1){
		string s;
		cin >> s;
		if(s == "0") return 0;
		int num=0;
		for(int i=0;i<s.size();i++) num+=s[i]-'0';
		cout<<num<<endl;
	}
	return 0;
}