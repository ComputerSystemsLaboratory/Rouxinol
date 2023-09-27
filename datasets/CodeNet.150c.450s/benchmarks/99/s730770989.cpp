#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int decode(string s){
	int res = 0, dig = 1;
	for(int i=0;i<s.size();i++){
		if(s[i]=='m') res += dig*1000;
		if(s[i]=='c') res += dig*100;
		if(s[i]=='x') res += dig*10;
		if(s[i]=='i') res += dig;
		dig = isdigit(s[i]) ? s[i]-'0' : 1;
	}
	return res;
}

string encode(int t){
	char c[4] = {'i', 'x', 'c', 'm'};
	string res = "";
	for(int i=0;i<4;i++){
		if(t%10>0) res += c[i];
		if(t%10>1) res += '0'+t%10;
		t /= 10;
	}
	reverse(res.begin(), res.end());
	return res;
}

int main(){
	int m; cin >> m;
	while(m--){
		string a, b; cin >> a >> b;
		cout << encode(decode(a)+decode(b)) << endl;
	}
}