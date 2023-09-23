#include <cstdio>
#include <map>

using namespace std;

int main() {
	while (true) {
		int N;
		scanf("%d", &N);

		if (N == 0) break;

		int gem[21][21] = {};
		for (int i = 0; i < N; i++) {
			int x, y;
			scanf("%d %d\n", &x, &y);
			gem[x][y] = 1;
		}

		pair<int, int> bot = make_pair(10, 10);

		int M;
		scanf("%d%*c", &M);

		int x = 10, y = 10;
		int cnt = 0;
		for (int i = 0; i < M; i++) {
			char c;
			int l;
			scanf("%c %d%*c", &c, &l);

			pair<int, int> d;
			if (c == 'N') d = make_pair(0, 1);
			if (c == 'E') d = make_pair(1, 0);
			if (c == 'W') d = make_pair(-1, 0);
			if (c == 'S') d = make_pair(0, -1);
			for (int j = 0; j < l; j++) {
				x += d.first;
				y += d.second;
				cnt += gem[x][y];
				gem[x][y] = 0;
			}
		}

		if (cnt == N) printf("Yes\n");
		else printf("No\n");
	}

	return 0;
}