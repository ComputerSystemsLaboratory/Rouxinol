#include <bits/stdc++.h>

#define INF (1001001001)

int dx[8] = {0, 1, 0, -1, -1, 1, 1, -1};
int dy[8] = {1, 0, -1, 0, 1, 1, -1, -1};

using namespace std;

int main()
{
	int n;

	while (scanf("%d", &n), n){
		int cnt = 0;

		int harf = n / 2 + 1;

		for (int i = 1; i <= harf; i++){
			int sum = i;

			for (int j = i + 1; j <= harf; j++){
				sum += j;
				if (sum == n){
					cnt++;
				}
				else if (sum > n){
					break;
				}
			}
		}

		printf("%d\n", cnt);
	}

	return (0);
}