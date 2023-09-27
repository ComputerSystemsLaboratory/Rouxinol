#include <iostream>
#include <algorithm>
#include <stack>
#include <string>
#include <queue>
#include <cstdlib>
using namespace std;

int main() {

	queue< pair<string, int> > que;
	string name;
	int n, q, t;
	cin >> n >> q;

	for(int i = 0; i < n; i++) {
		cin >> name >> t;
		que.push(make_pair(name, t));
	}

	pair<string, int> u;
	int elapse = 0, a;

	while( que.empty() == false) {
		u = que.front(); que.pop();
		a = min(u.second, q);
		elapse += a;
		u.second -= a;
		if(u.second > 0) que.push(u);
		else cout << u.first << " " << elapse <<endl;
	}
	return 0;
}