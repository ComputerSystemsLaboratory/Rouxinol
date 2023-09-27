#include <iostream>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <queue>
#include <algorithm>
#include <cmath>
#include <vector>
#include <list>
#include <string>
#include <stack>
#include <cstring>
#include <set>
#include <map>
#include <climits>
#include <cassert>

#define LEN 100005
using namespace std;

typedef struct pp{
	char name[100];
	int t;
} P;

P Q[LEN];
int head, tail, n;

void enqueue(P x) {
	Q[tail] = x;
	tail = (tail + 1) % LEN;
}

P dequeue() {
	P x = Q[head];
	head = (head + 1) % LEN;
	return x;
}

int main() {
	int elaps = 0, c;
	int i, q;
	P u;
	cin >> n >> q;

	for (int i = 1; i < n+1; i++) {
		cin >> Q[i].name;
		cin >> Q[i].t;
	}

	head = 1; tail = n + 1;

	while (tail != head) {
		u = dequeue();
		c = min(q, u.t);
		u.t -= c;
		elaps += c;
		if (u.t > 0) {
			enqueue(u);
		}
		else {
			cout << u.name <<" "<< elaps;
			cout << endl;
		}
	}
}