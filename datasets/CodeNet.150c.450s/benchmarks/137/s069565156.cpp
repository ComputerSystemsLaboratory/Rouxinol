#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <unordered_set>

using namespace std;
int main() {
	int n;
	cin >> n;
	typedef unordered_set <string> set_t;
	set_t A;
		string s;
	while( n > 0 ) { 
		cin >> s;
		if ( s == "insert" ) {
			cin >> s;
			A.insert(s);
		}
		else
			if ( s == "find" ) {
			cin >> s;
				int m = A.count(s);
			if (m == 1) cout << "yes" << endl;
			else cout << "no" << endl;
		}
		n = n-1;
		}
}