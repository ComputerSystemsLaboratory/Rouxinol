#include<iostream>
#include<queue>
using namespace std;

int main() {
	int i, n, tmp, sum;
	priority_queue<int> q;
	while (1) {
		cin >> n;
		if (n == 0)break;
		sum = 0;
		for (i = 0; i < n; i++) {
			cin >> tmp;
			q.push(tmp);
		}
		q.pop();
		while (q.size() > 1) {
			sum += q.top();
			q.pop();
		}
		q.pop();
		cout << sum / (n - 2) << endl;
	}





	return 0;
}