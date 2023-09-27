#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	priority_queue<int> q;
	string s;
	int n;
	while (1) {
		cin >> s;
		if ( s == "end" ) break;
		else if ( s == "extract" ) {
			cout << q.top() << endl;
			q.pop();
		} else {
			cin >> n;
			q.push( n );
		}
	}
}