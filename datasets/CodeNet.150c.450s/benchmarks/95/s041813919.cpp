#include <bits/stdc++.h>

using namespace std;

#define INF (100100100)

int dx[8] = {0, 1, 0, -1, -1, 1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, 1, -1, -1};

int main()
{
	int n;

	while (scanf("%d", &n), n){
		vector<string> step(n);

		for (int i = 0; i < n; i++){
			cin >> step[i];
		}

		int ans = 0;

		for (int i = 1; i < n; i++){
			if (step[i] == "lu" && step[i - 1] == "ru"){
				ans++;
			}
			if (step[i] == "ru" && step[i - 1] == "lu"){
				ans++;
			}
			if (step[i] == "ld" && step[i - 1] == "rd"){
				ans++;
			}
			if (step[i] == "rd" && step[i - 1] == "ld"){
				ans++;
			}
		}

		printf("%d\n", ans);
	}

	return (0);
}