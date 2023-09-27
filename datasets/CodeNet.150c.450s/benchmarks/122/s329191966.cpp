#include<iostream>
#include<queue>
using namespace std;
int main() {
	priority_queue<int>pq;
	char s[10];
	while (cin >> s) {
		if (s[2] == 'd')return 0;
		if (s[0] == 'i') { int x; cin >> x; pq.push(x); }
		else {
			int x = pq.top(); pq.pop();
			cout << x << endl;
		}
	}
}