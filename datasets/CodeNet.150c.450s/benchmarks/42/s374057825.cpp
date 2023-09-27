#include <iostream>
#include <algorithm>
using namespace std;
int head, tail;
const int num = 100005;
typedef struct pp {
	char name[11];
	int t;
} p;
p s[num];
void enqueue(p a) {
	s[tail] = a;
	tail = (1 + tail) % num;
}
p dequeue() {
	p b = s[head];
	head = (1 + head) % num;
	return b;
}

int main() {
	int n, q, i, sum = 0;
	cin >> n;
	cin >> q;
	for (i = 0; i < n; i++) {
		cin >> s[i].name >> s[i].t;
	}
	head = 0;
	tail = n;
	while (head != tail) {
		p c = dequeue();
		int j = min(q, c.t);
		c.t -= j;
		sum += j;
		if (c.t > 0) 
			enqueue(c);
		else cout << c.name <<' '<< sum << endl;
	}
	return 0;
}