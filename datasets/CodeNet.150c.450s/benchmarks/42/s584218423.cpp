#include <iostream>
#include <string>
using namespace std;
class Process {
public:
	Process() : next(NULL) {}
	Process *next;
	string pname;
	int ptime;
};

class Queue {
	Process *head;
	Process *tail;
public:
	Queue() : head(NULL), tail(NULL) {}

	void enqueue(Process *p) {
		if (head == NULL) {
			head = p;
		} else {
			tail->next = p;
		}
		tail = p;
		tail->next = NULL;
	}
	Process *dequeue() {
		Process *p = head;
		if (head != NULL) {
			head = head->next;
		}
		return p;
	}
};

int main() {
	int n, q;
	cin >> n >> q;

	Process *p;
	Queue queue;
	for (int i = 0; i < n; ++i) {
		p = new Process;
		cin >> p->pname >> p->ptime;
		queue.enqueue(p);
	}

	int current = 0;
	while((p = queue.dequeue()) != NULL) {
		if (p->ptime > q) {
			p->ptime -= q;
			current += q;
			queue.enqueue(p);
		} else {
			current += p->ptime;
			cout << p->pname << " " << current << endl;
		}
	}
}