#include<iostream>
#include<string>
using namespace std;

static const int LEN = 100005;

struct P {
	string name;
	int t;
};

P Q[LEN];
int head, tail;

void enqueue(P X) {
	Q[tail] = X;
	tail = (tail + 1) % LEN;
} 

P dequeue() {
	P X = Q[head];
	head = (head + 1) % LEN;
	return X;
}

int min(int a, int b) {
	return a < b ? a : b;
}


int main() {
	int n, q;
	cin >> n;
	cin >> q;

	for (int i = 1; i <= n; i++) {
		cin >> Q[i].name;
		cin >> Q[i].t;
	}
	head = 1;
	tail = n + 1;
	int elaps = 0;

	while(head != tail) {
		P a;
		int c;
		a = dequeue();
		c = min(q, a.t);
		a.t -= c;
		elaps += c;
		if (a.t > 0) enqueue(a);
		else cout << a.name << " " << elaps << endl;
	}
	return 0;
}
	