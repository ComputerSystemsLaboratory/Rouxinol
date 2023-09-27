#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

inline string reverse(string s){
	reverse(s.begin(), s.end());
	return s;
}

int main(){
	string train[71*6+2];
	int t; cin >> t;
	while(t--){
		string s; cin >> s;
		int n = s.size();
		string t = reverse(s);
		train[0] = s;
		train[1] = t;
		int pos = 2;
		for(int i=1;i<n;i++){
			string a = s.substr(0,i);
			string b = s.substr(i);
			string ra = reverse(a);
			string rb = reverse(b);
			train[pos++] = a + rb;
			train[pos++] = ra + b;
			train[pos++] = ra + rb;
			train[pos++] = b + a;
			train[pos++] = b + ra;
			train[pos++] = rb + a;
		}
		sort(train, train+pos);
		int ans = 1;
		for(int i=1;i<pos;i++) ans += train[i] != train[i-1];
		cout << ans << endl;
	}
}