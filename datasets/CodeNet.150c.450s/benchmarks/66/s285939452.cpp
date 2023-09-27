#include <bits/stdc++.h>
using namespace std;

#define pb         push_back

const int INF = 100000000;

int main(void) {
	int n, m;
	map<string, int> id;
	cin >> n;
	for(int i=0; i<n; i++){
		string t;
		cin >> t;
		id[t] = 1;
	}
	cin >> m;
	int state = 1;
	for(int i=0; i<m; i++){
		string t;
		cin >> t;
		if(id.find(t) == id.end()){
			cout << "Unknown " << t << endl;
		}else if(state == 1){
			cout << "Opened by " << t << endl;
			state = 0;
		}else if(state == 0){
			cout << "Closed by " << t << endl;
			state = 1;
		}
	}
	
	return 0;
}