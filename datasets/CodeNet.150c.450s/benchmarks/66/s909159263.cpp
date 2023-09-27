#include<cstdio>
#include<iostream>
#include<map>
using namespace std;
int main() {
	map<string, int> word;
	int n;
	cin >> n;
	for(int i = 0; i < n; i++) {
		string u;
		cin >> u;
		word[u] = 0;
	}
	int m;
	cin >> m;
	bool opened = false;
	for(int i = 0; i < m; i++) {
		string t;
		cin >> t;
		if(word.find(t) != word.end()) {
			if(!opened) {
				cout << "Opened by " << t << endl;
				opened = true;
			}
			else {
				cout << "Closed by " << t << endl;
				opened = false;
			}
		}
		else {
			cout << "Unknown " << t << endl;
		}
	}
	return 0;
}