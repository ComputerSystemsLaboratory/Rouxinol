#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std;

struct Process
{
	int time;
	char name[100];
};

#define SIZE 100005
Process Q[SIZE];

class Queue
{
	int putloc;
	int getloc;
public:	
	Queue() { putloc = getloc = 0; }
	bool isEnpty();
	void push(Process p);
	Process pop();
};

void Queue::push(Process p)
{
	if (putloc + 1 == getloc || (putloc == (SIZE - 1) && getloc == 0)) exit(1);
	putloc++;
	if (putloc == SIZE) putloc = 0;
	Q[putloc] = p;
}

Process Queue::pop()
{
	getloc++;
	if (getloc == SIZE) getloc = 0;
	return Q[getloc];
}

bool Queue::isEnpty()
{
	return getloc == putloc;
}

int main()
{
	Queue que;
	Process p;
	int n, q;
	int total = 0;
	cin >> n >> q;

	for (int i = 0; i < n; i++) {
		scanf("%s", p.name);
		scanf("%d" ,&p.time);
		que.push(p);
	}
	while (!que.isEnpty()) {
		p = que.pop();
		if (p.time > q) {
			p.time -= q;
			que.push(p);
			total += q;
		}
		else {
			total += p.time;
			cout << p.name << " " << total << endl;
		}
	}
	return 0;
}