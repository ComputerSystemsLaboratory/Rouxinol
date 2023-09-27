#include <bits/stdc++.h>

using namespace std;
int main() {
	vector<string>VS{ "Opened by ","Closed by ","Unknown " };
	set<string>SS;
	int N;
	cin >> N;
	for( size_t i = 0; i < N; i++ ) {
		string S;
		cin >> S;
		SS.insert( S );
	}
	cin >> N;
	bool x = 0;
	for( size_t i = 0; i < N; i++ ) {
		string S;
		cin >> S;
		if( SS.end() == find( SS.begin(), SS.end(), S ) ) {
			cout << VS[2] << S << endl;
		} else {
			cout << VS[x] << S << endl;
			x = 1 - x;
		}
	}
	return 0;
}