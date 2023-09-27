#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

string itos(int n){
	stringstream ss;
	ss << n;
	return ss.str();
}
string table = "mcxi";
int value[] = {1000,100,10,1};

int from(string s){
	int num = 0;
	int ans = 0;
	for(int i = 0 ; i < s.size() ; i++){
		if(~table.find(s[i])){
			int p = table.find(s[i]);
			if(num == 0) num = 1;
			ans += value[p] * num;
			num = 0;
		}else{
			num = num * 10 + s[i] - '0';
		}
	}
	return ans + num;
}
string to(int n){
	string ans = "";
	for(int i = 0 ; i < 4 ; i++){
		int g = n / value[i];
		if(g > 1) ans += itos(g);
		if(g >= 1) ans += table[i];
		n -= g * value[i];
	}
	return ans;
}
int main(){
	int T; cin >> T;
	while(T--){
		string a,b;
		cin >> a >> b;
		cout << to(from(a)+from(b)) << endl;
	}
}