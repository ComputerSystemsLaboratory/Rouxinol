#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>

using namespace std;
int main() {
	string s;
	int q;
	priority_queue <int> Q;
	while (cin >> s ) {
		if ( s == "insert" ) {
			cin >> q;
			Q.push(q);
		}
		else
			if ( s == "extract" ) {
				int n = Q.top();
				Q.pop();
				cout << n << endl;
			}
		}
}