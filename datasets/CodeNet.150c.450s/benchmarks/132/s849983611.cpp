#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, p;

	while (scanf("%d %d", &n, &p), n){
		vector<int> v(n);

		int index = 0;
		int stone = p;

		while (true){
			if (p){
				p--;
				v[index] += 1;

				if (p == 0 && v[index] == stone){
					break;
				}
			}
			else {
				p = v[index];
				v[index] = 0;
			}

			index++;
			index %= n;
		}

		printf("%d\n", index);
	}

	return (0);
}