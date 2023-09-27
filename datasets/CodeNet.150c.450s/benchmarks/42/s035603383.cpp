#include <iostream>
#include <string>

using namespace std;

struct Process {
	string name;
	int time;
};

Process queue[200000];
int front;
int rear;

bool isEmpty() {
	return front == rear;
}

void enqueue(Process p) {
	queue[rear] = p;
	if (rear == 200000 - 1) {
		rear = 0;
	}
	else {
		rear++;
	}
}

Process dequeue() {
	Process temp;
	temp = queue[front];
	if (front == 200000 - 1) {
		front = 0;
	}
	else {
		front++;
	}
	return temp;
}

int main() {
	front = 0;
	rear = 0;

	int n;
	int q;
	Process p;

	cin >> n >> q;

	for (int i = 0; i < n; i++) {
		cin >> p.name >> p.time;
		enqueue(p);
	}

	int timeElapsed = 0;

	while (isEmpty() == false) {
		p = dequeue();
		if (p.time <= q) {
			timeElapsed += p.time;
			cout << p.name << " " << timeElapsed << endl;
		}
		else {
			timeElapsed += q;
			p.time -= q;
			enqueue(p);
		}
	}

	return 0;
}