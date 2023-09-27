#include <iostream>
#include <string>

using namespace std;

struct Process {
	string name;
	int time;
};

class PQueue {
private:
	const static int MAX = 100000;
	Process q[MAX];
	int head;
	int tail;

public:
	PQueue();
	bool isEmpty();
	bool isFull();
	void enqueue(Process);
	Process dequeue();
};

int main(void) {
	int n, q, ptime;
	int t = 0;
	string pname;
	Process p;
	PQueue Q;

	cin >> n >> q;

	for (int i = 0; i < n; i++) {
		cin >> pname >> ptime;
		p.name = pname;
		p.time = ptime;
		Q.enqueue(p);
	}

	while (!Q.isEmpty()) {
		p = Q.dequeue();
		if (p.time <= q) {
			t += p.time;
			cout << p.name << " " << t << "\n";
			continue;
		}
		else {
			p.time -= q;
			Q.enqueue(p);
			t += q;
		}
	}

	return 0;
}


PQueue::PQueue() {
	head = tail = 0;
}

bool PQueue::isEmpty() {
	return head == tail;
}

bool PQueue::isFull() {
	return head == (tail + 1) % MAX;
}

void PQueue::enqueue(Process p) {
	if (isFull()) {
		cout << "error: over flow\n";
		return;
	}
	q[tail] = p;
	if (tail + 1 == MAX) {
		tail = 0;
	}
	else {
		tail++;
	}
}

Process PQueue::dequeue() {
	Process p;
	if (isEmpty()) {
		cout << "error: under flow\n";
		p.name = " ";
		p.time = -1;
		return p;
	}
	p = q[head];
	if (head + 1 == MAX) {
		head = 0;
	}
	else {
		head++;
	}
	return p;
}