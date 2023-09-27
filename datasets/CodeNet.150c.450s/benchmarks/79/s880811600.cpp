#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, r;

	while (scanf("%d %d", &n, &r), n){
		vector<int> v;

		for (int i = 0; i < n; i++){
			v.push_back(n - i);
		}

		for (int i = 0; i < r; i++){
			int p, c;

			scanf("%d %d", &p, &c);

			stack<int> s;

			for (int j = p - 1; j < p + c - 1; j++){
				s.push(v[j]);
				v[j] = 0;
			}

			for (int j = n - 1; j >= c; j--){
				if (v[j] == 0){
					v[j] ^= v[j - c];
					v[j - c] ^= v[j];
					v[j] ^= v[j - c];
				}
			}

			for (int j = c - 1; j >= 0; j--){
				v[j] = s.top();
				s.pop();
			}
		}

		printf("%d\n", v[0]);
	}

	return (0);
}