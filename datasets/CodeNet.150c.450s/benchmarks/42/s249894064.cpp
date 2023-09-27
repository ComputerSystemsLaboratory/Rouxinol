#include<algorithm>
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class process {
public:
	string name;
	int time;
};
class queue {
public:
	process A[100000];
	int head, tail;
	void enqueue(process x) {
		A[tail] = x;
		tail = (tail + 1) % 100000;
		return;
	}
	process dequeue() {
		process x = A[head];
		head = (head + 1) % 100000;
		return x;
	}
};
int main() {
	int elaps = 0, c, n, q;
	cin >> n >> q;
	queue z;
	for (int i = 0; i < n; i++) {
		cin >> z.A[i].name >> z.A[i].time;
	}
	z.head = 0; z.tail = n % 100000;
	while (z.head != z.tail) {
		process u = z.dequeue();
		c = min(q, u.time);
		u.time -= c;
		elaps += c;
		if (u.time > 0)z.enqueue(u);
		else cout << u.name << " " << elaps << endl;
	}
	return 0;
}