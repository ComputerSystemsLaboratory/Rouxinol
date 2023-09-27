#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename T>
class  PriorityQueue {
private:
	vector <T> d;
public:
	void push(T s) {
		int k = d.size();
		d.push_back(s);
		while (k&&d[(k - 1) / 2] < d[k]) {
			swap(d[(k - 1) / 2], d[k]);
			k = (k - 1) / 2;
		}
	}
	T top() {
		return d[0];
	}
	void pop() {
		d[0] = d.back();
		d.pop_back();
		maxHeapify(0);
	}
	void maxHeapify(int k) {
		int l = 2 * k + 1, r = 2 * k + 2;
		T leargest;
		if (l < d.size() && d[k] < d[l]) {
			leargest = l;
		}
		else {
			leargest = k;
		}
		if (r < d.size() && d[leargest] < d[r]) {
			leargest = r;
		}
		if (leargest != k) {
			swap(d[k], d[leargest]);
			maxHeapify(leargest);
		}
	}
};
int main() {
	PriorityQueue<int> pq;
	string a;
	int b;
	while (1) {
		cin >> a;
		if (a == "insert") {
			cin >> b;
			pq.push(b);
		}
		else if (a == "end")break;
		else {
			cout << pq.top() << endl;
			pq.pop();
		}
	}
	return 0;
}