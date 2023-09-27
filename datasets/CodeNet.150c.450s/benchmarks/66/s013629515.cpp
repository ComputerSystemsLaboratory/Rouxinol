#include <bits/stdc++.h>
using namespace std;

int n, m;
set<string> st;
int t;

int main(){
//	cin.tie(0);
//	ios::sync_with_stdio(false);
	cin >> n;
	for(int i=0; i<n; ++i){
		string s;
		cin >> s;
		st.insert(s);
	}
	cin >> m;
	for(int j=0; j<m; ++j){
		string s;
		cin >> s;
		auto ite = st.find(s);
		if(ite == st.end()) cout << "Unknown " << s << "\n";
		else{
			if(t == 0) cout << "Opened by " << s << "\n";
			else cout << "Closed by " << s << "\n";
			t = 1 - t;
		}
	}
}
