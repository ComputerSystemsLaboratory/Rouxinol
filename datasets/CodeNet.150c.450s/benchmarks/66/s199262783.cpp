#include<bits/stdc++.h>
using namespace std;

int main(void){
	int n, m;
	set<string> st;
	cin >> n;
	string s;
	for(int i = 0; i < n; ++i){
		cin >> s;
		st.insert(s);
	}
	cin >> m;
	bool open = false;
	for(int i = 0; i < m; ++i){
		cin >> s;
		if(st.find(s) == st.end()){
			cout << "Unknown ";
		}else{
			if(open){
				cout << "Closed by ";
			}else{
				cout << "Opened by ";
			}
			open = !open;
		}
		cout << s << endl;
	}
	return 0;
}
