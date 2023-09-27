#include <iostream>
#include <algorithm>
#include <vector>
#include <math.h>
#include <string>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <functional>
using namespace std;
typedef long long ll;

int main() {
	int N;
	cin >> N;
	map<int, int> m;

	ll sum = 0;
	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		m[num]++;
		sum += num;
	}

	int Q;
	cin >> Q;
	for (int i = 0; i < Q; i++) {
		ll b, c;
		cin >> b >> c;
		m[c] += m[b];
		sum = sum- (m[b] * b) + (m[b]*c);
		m[b] = 0;
		cout << sum << endl;
	}
}
