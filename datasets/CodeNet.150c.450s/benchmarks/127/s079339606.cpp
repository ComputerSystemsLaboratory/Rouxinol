#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

string r(string a){
	reverse(a.begin(),a.end());
	return a;
}
int main(){
	int T; cin >> T;
	while(T--){
		string s; cin >> s;
		set<string> c;
		for(int i = 1 ; i < s.size() ; i++){
			string a = s.substr(0,i) , b = s.substr(i);
			c.insert(a+b);
			c.insert(b+a);
			c.insert(r(a)+r(b));
			c.insert(r(b)+r(a));
			c.insert(a+r(b));
			c.insert(b+r(a));
			c.insert(r(a)+b);
			c.insert(r(b)+a);
		}
		cout << c.size() << endl;
	}
}