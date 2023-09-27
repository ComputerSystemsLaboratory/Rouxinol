#include<iostream>
#include<map>
#include<string>
using namespace std;

int main() {
	map<string, int> lst;
	int n, m; string s;
	bool isOpen = false;
	cin >> n;
	for(int i=0; i<n; ++i) {
		cin >> s;
		lst[s] = 1;
	}
	cin >> m;
	for(int i=0; i<m; ++i) {
		cin >> s;
		if(lst.count(s)==0) {
			cout << "Unknown " << s << endl;
		}else {
			isOpen = !isOpen;
			cout << (isOpen ? "Opened by " : "Closed by ") << s << endl;
		}
	}
	return 0;
}