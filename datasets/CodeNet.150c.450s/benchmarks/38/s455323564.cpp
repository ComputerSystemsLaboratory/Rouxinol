#include <iostream>
#include <queue>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

int main(){
	int num;
	cin >> num;
		priority_queue<int> pq;
	for (int i = 0; i < num; ++i) {
		for (int j = 0; j < 3; ++j) {
			int a;
			cin >> a;
			pq.push(a);
		}
		int a, b, c;
		a = pq.top();
		pq.pop();
		b = pq.top();
		pq.pop();
		c = pq.top();
		pq.pop();
		if (a * a == b * b + c * c) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}
	return 0;
}