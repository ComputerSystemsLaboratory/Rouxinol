#include<stdio.h>
#include<string.h>
#define maxn 100000

typedef struct nameandtime {
	char name[10+2];
	int time; 
}RW;

RW Q[maxn];
int head, tail;

void enqueue(RW x) {
	Q[tail] = x;
	tail = (tail + 1) % maxn;
}

RW dequeue() {
	RW x = Q[head];
	head = (head + 1) % maxn;
	return x;
}

int min(int a, int b) {
	return a < b ? a : b;
}

int main() {
	int q, t = 0, n;
	RW u;
	scanf("%d %d", &n, &q);
	for( int i = 1; i <= n; i++) {
		scanf("%s", Q[i].name);
		scanf("%d", &Q[i].time);
	}
	head = 1 ; tail = n + 1;
	while ( head != tail ) {
		u = dequeue();
		int c = min(q, u.time);
		u.time -= c;
		t += c;
		if( u.time > 0) enqueue(u);
		else printf("%s %d\n", u.name, t);
	}
}
