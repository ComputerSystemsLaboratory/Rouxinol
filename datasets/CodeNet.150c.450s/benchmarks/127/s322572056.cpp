// 2006à\IB ñÔÌÒ¬p[gII
#include <iostream>
#include <string>
#include <set>
#include <algorithm>

using namespace std;

inline string reverse(string s){
	reverse(s.begin(), s.end());
	return s;
}

int main(){
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		set<string> S;
		S.insert(s);
		S.insert(reverse(s));
		int n = s.size();
		for(int i=1;i<n;i++){
			string a = s.substr(0,i);
			string b = s.substr(i);
			string ra = reverse(a);
			string rb = reverse(b);
			S.insert( a +rb);
			S.insert(ra + b);
			S.insert(ra +rb);
			S.insert( b + a);
			S.insert( b +ra);
			S.insert(rb + a);
		}
		cout << S.size() << endl;
	}
}