#include<iostream>
#include<cstdlib>

using namespace std;

struct Process {
	char name[10];
	int time;
};

static const int LEN = 100005;

Process Q[LEN];
int head, tail, n;

//void initialize();
//bool isEmpty();
//bool isFull();
void enqueue(Process x);
Process dequeue();
int min(int a, int b);

int main() {
	int q,c;
	int elaps=0;
	Process u;
	cin >> n;
	cin >> q;

	for (int i = 1; i < n+1; i++)
	{
		cin >> Q[i].name;
		cin >> Q[i].time;
	}

	head = 1; tail = n + 1;

	while (head != tail) {
		u = dequeue();
		c = min(q, u.time);
		u.time = u.time - c;
		elaps = elaps + c;
		if (u.time > 0) {
			enqueue(u);
		}
		else {
			cout << u.name << " " << elaps << endl;
		}
	}
	return 0;
}


void enqueue(Process x) {
	Q[tail] = x;
	tail = (tail+ 1) % LEN;
}

Process dequeue() {
	Process x = Q[head];
	head = (head + 1) % LEN;
	return x;
}

int min(int a, int b) {
	if (a > b) {
		return b;
	}
	else {
		return a;
	}
}
