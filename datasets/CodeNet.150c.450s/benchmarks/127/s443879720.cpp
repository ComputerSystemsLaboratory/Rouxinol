#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)
const int    INF = 100000000;
const double EPS = 1e-10;
const int    MOD = 1000000007;
using namespace std;
typedef pair<int,int> P;

string str;

void solve(){
	cin >> str;
	set<string> s;
	rep(i,str.size()){
		string a = str.substr(0,i), b = str.substr(i,str.size()-i);
		string ra, rb;
		for(int j = a.size()-1; j >= 0; j--) ra.push_back(a[j]);
		for(int j = b.size()-1; j >= 0; j--) rb.push_back(b[j]);
		s.insert(a+b); s.insert(b+a);
		s.insert(ra+b); s.insert(b+ra);
		s.insert(a+rb); s.insert(rb+a);
		s.insert(ra+rb); s.insert(rb+ra);
		
	}
	cout << s.size() << endl;
}

int main(){
	int n;
	cin >> n;
	rep(i,n) solve();
}