#include <bits/stdc++.h>

#define INF (1001001001)

int dx[8] = {0, 1, 0, -1, -1, 1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, 1, -1, -1};

using namespace std;

int main()
{
	int x, y, s;

	while (scanf("%d %d %d", &x, &y, &s), x){
		int ans = -1;

		for (int i = 1; i < s; i++){
			for (int j = 1; j < s; j++){
				if (i * (100 + x) / 100 + j * (100 + x) / 100 == s){
					ans = max(ans, i * (100 + y) / 100 + j * (100 + y) / 100);
				}
			}
		}

		printf("%d\n", ans);
	}
}