#include <bits/stdc++.h>
using namespace std;

int main() {
	int n, m;
	string u, t;
	map<string, bool> IC;
	bool flag = false;
	cin >> n;
	for(int i = 0; i < n; ++i){
		cin >> u;
		IC[u] = true;
	}
	cin >> m;
	for(int i = 0; i < m; ++i){
		cin >> t;
		if(IC[t]){
			if(flag){
				cout << "Closed by " << t << endl;
			}
			else{
				cout << "Opened by " << t << endl;
			}
			flag ^= 1;
		}
		else{
			cout << "Unknown " << t << endl;
		}
	}
	return 0;
}