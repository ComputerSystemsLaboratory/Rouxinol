#include <iostream>
#include <string>                //???????????????
#include <queue>
#include <algorithm>
using namespace std;
queue<pair<string, int> > Q;
const int num = 100005;
int head, tail, t;
string name;
int main() {
	int n, q, sum = 0, mi;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> name >> t;
		Q.push(make_pair(name, t));
	}
	pair<string, int> pa;
	head = 0;
	tail = n;
	while (head != tail) {
		pa = Q.front(); Q.pop();
		head = (1 + head) % num;
		mi = min(q, pa.second);
		pa.second -= mi;
		sum += mi;
		if (pa.second > 0) {
			Q.push(pa);
			tail = (1 + tail) % num;
		}
		else {
			cout << pa.first << " " << sum << endl;
		}
	}
	return 0;
}