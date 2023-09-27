#include <iostream>
#include <stdio.h>

#define LEN 100005
using namespace std;

struct Process {
	char name[10];
	int time;
};

int head, tail;
Process P[LEN];

bool isEmpty(void) {
	return head == tail;
}

//bool isFull(void) {
//	return 
//}

Process deque(void) {
	Process x = P[head];
	head++;
	if (head == LEN) head = 0;
	return x;
}

void enque(Process x) {
//	isFull();
	P[tail] = x;
	tail++;
	if (tail == LEN) tail = 0;
}

int main(void) {
	int n, q;
	Process check;

	scanf("%d %d", &n, &q);
	for (int i = 0; i < n; i++) {
		scanf("%s", P[i].name);
		scanf("%d", &P[i].time);
	}
	head = 0;
	tail = n;

	int now = 0;
	while (!isEmpty()) {
		check = deque();
		if (check.time <= q) {
			now += check.time;
			printf("%s %d\n", check.name, now);
		} else {
			now += q;
			check.time -= q;
			enque(check);
		}
	}


	return 0;
}

