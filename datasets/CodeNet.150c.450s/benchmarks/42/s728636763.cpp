#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

class PROCESS {
public:
	string name;
	int time;
};

PROCESS p[100000];
int headIndex = 0;
int lastIndex = 0;

void enqueue(PROCESS np) {
	p[lastIndex++] = np;
	if (lastIndex >= 100000)
		lastIndex = 0;
}

PROCESS dequeue() {
	PROCESS result = p[headIndex++];
	if (headIndex >= 100000)
		headIndex = 0;
	return result;
}

bool isEmpty() {
	return lastIndex == headIndex;
}

int main() {
	int n, q;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		PROCESS p;
		cin >> p.name >> p.time;
		enqueue(p);
	}
	int ctime = 0;
	while (!isEmpty()) {
		PROCESS p = dequeue();
		if (p.time <= q) {
			ctime += p.time;
			cout << p.name << " " << ctime << endl;
			;
		} else {
			p.time -= q;
			ctime += q;
			enqueue(p);
		}
	}

	return 0;
}