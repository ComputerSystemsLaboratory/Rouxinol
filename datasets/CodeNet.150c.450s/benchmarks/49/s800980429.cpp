#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;

	while (scanf("%d", &n), n){
		vector<int> v;

		for (int i = 0; i < n; i++){
			int s;

			scanf("%d", &s);

			v.push_back(s);
		}

		sort(v.begin(), v.end());

		v[0] = v[n - 1] = 0;

		int sum = 0;

		for (int i = 0; i < n; i++){
			sum += v[i];
		}

		printf("%d\n", sum / (n - 2));
	}

	return (0);
}