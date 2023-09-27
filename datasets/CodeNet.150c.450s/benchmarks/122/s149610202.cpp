#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <map>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>

using namespace std;

typedef long long ll;

int main() {
	priority_queue<ll> S;
	ll k;
	string str;
	while (1) {
		cin >> str;
		if (str == "end")
			break;
		if (str == "insert") {
			cin >> k;
			S.push(k);
		} else {
			cout << S.top() << endl;
			S.pop();
		}
	}
	return 0;
}