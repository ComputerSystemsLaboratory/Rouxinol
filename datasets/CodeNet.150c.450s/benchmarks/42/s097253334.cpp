#include<stdio.h>
#include<string.h>
#include<iostream>

using namespace std;

typedef struct {
	char name[100];
	int time;
}Px;
Px Q[100000];

int min(int a, int b) { return a < b ? a : b; }

int head, tail;

void enqueue(Px x) {
	Q[tail] = x;
	tail = (tail + 1)%100000;
}

Px dequeue() {
	Px x = Q[head];
	head = (head + 1) % 100000;
	return x;
}


int main()
{
	int n,q,c, sum = 0;
	Px u;
	cin >> n >> q;
	for (int i = 1; i <= n; i++) {
		cin >> Q[i].name >> Q[i].time;
	}
	head = 1, tail = n + 1;
	
	while (head != tail) {
		u = dequeue();
		c = min(q, u.time);
		u.time -= c;
		sum += c;
		if (u.time > 0) enqueue(u);
		else {
			cout << u.name << ' ' << sum << endl;
		}
	}
    return 0;
}