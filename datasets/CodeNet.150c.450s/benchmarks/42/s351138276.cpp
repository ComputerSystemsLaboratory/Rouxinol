# include <iostream>
# include <cstdlib>
# include <queue>

using namespace std;

typedef struct pp {
	string name;
	int time;
} P;

int main() {
	int n, q, time = 0;
	queue<P> que;

	cin >> n >> q;
	for (int i = 0; i < n; i++) {
		P p;
		cin >> p.name >> p.time;
		que.push(p);
	}

	while (que.size()) {
		P p = que.front(); que.pop();
		if (p.time <= q) {
			time += p.time;
			cout << p.name << " " << time << endl;
		} else {
			p.time -= q;
			time += q;
			que.push(p);
		}
	}

	return 0;
}