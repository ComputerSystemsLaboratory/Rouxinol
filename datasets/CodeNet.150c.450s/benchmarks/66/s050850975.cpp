#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

int main() {
	int n, m;
	cin >> n;
	vector<string> sn(n);
	rep(i, n) {
		cin >> sn[i];
	}
	cin >> m;
	bool open = true;
	rep(i, m) {
		string in;
		cin >> in;
		bool match = false;
		rep(j, n) {
			if( sn[j] == in ) {
				match = true;
				break;
			}
		}
		if(match) {
			cout << (open ? "Opened by " : "Closed by ");
			open = !open;
		} else {
			cout << "Unknown ";
		}
		cout << in << endl;
	}
	return 0;
}