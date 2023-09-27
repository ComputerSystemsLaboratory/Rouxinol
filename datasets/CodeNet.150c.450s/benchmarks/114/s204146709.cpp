#include <stdio.h>
#include <queue>
#include <vector>
#include <functional>

#define N 100
using namespace std;


class list {
public:
	int cost;
	int node;
	list(void) {
		cost = -1;
		node = -1;
	}
};

bool operator<(const list& y,const list& x) {
	return (y.cost < x.cost);
};
bool operator>(const list& y,const list& x) {
	return (y.cost>x.cost);
};

int m[N][N];
bool visited[N];
int sum = 0;

int main(void) {
	priority_queue<list, vector<list>, greater<list> > pq;
	int n;
	int now;
	scanf("%d", &n);
	for (int i = 0; i<n; i++) {
		visited[i] = false;
		for (int j = 0; j<n; j++) {
			scanf("%d", &m[i][j]);
		}
	}
	now = 0;
	while (1) {
		//printf("I'm in %d\n", now);
		visited[now] = true;
		for (int j = 0; j<n; j++) {
			if (m[now][j] != -1) {
				list a;
				a.cost = m[now][j];
				a.node = j;
				pq.push(a);
			//	printf("I pushed %d %d\n", a.node, a.cost);
			}
		}
		//system("pause");
		list x;
		while (!pq.empty()) {
			if (visited[(pq.top()).node] == false) {
				x = pq.top();
				//printf("I got %d %d\n", x.node, x.cost);
				pq.pop();
				now = x.node;
				sum += x.cost;
				break;
			}
			else pq.pop();
		}
		if (x.node == -1)break;
	}
	printf("%d\n", sum);
	return 0;
}