#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

struct proc {
	string pid;
	int procTime;
};

const int MAX = 100001;
proc queueArr[MAX];
int head, tail;

void inc(int* a) {
	if (*a == MAX - 1)
		*a = 0;
	else
		(*a)++;
}

bool isFull() {
	int a = tail;
	inc(&a);
	return a == head;
}

bool isEmpty() {
	return head == tail;
}

void push(proc p) {
	if (isFull()) {
		cout << "queue is full" << endl;
		return;
	}
	inc(&tail);
	queueArr[tail] = p;
}

proc pop() {
	if (isEmpty()) {
		cout << "queue is empty" << endl;
	}
	inc(&head);
	return queueArr[head];
}

int main() {
	head = tail = 0;
	int n, q, tcnt = 0;
	proc p;
	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		cin >> p.pid >> p.procTime;
		push(p);
	}
	while(!isEmpty()) {
		p = pop();
		if (p.procTime > q) {
			p.procTime -= q;
			push(p);
			tcnt += q;
		}
		else {
			cout << p.pid << " " << p.procTime + tcnt << endl;
			tcnt += p.procTime;
		}
	}

	return 0;
}