#include <bits/stdc++.h>

using namespace std;

int main()
{
	int h;

	while (scanf("%d", &h), h){
		vector<vector<int> > v;

		v.resize(h);

		for (int i = 0; i < h; i++){
			v[i].resize(5);
		}

		for (int i = 0; i < h; i++){
			for (int j = 0; j < 5; j++){
				scanf("%d", &v[i][j]);
			}
		}

		int sum = 0;
		bool nico = true;

		while (nico){
			nico = false;

			for (int i = 0; i < h; i++){
				int flag = 0;
				int pos = 0;

				for (int j = 1; j < 5; j++){
					if (v[i][j - 1] == v[i][j] && v[i][j] != 0){
						flag++;
					}
					else if (flag > 1){
						break;
					}
					else {
						flag = 0;
						pos = j;
					}
				}

				if (flag > 1){
					for (int j = pos; j <= pos + flag; j++){
						sum += v[i][j];
						v[i][j] = 0;
					}

					nico = true;
				}
			}

			for (int i = h - 1; i > 0; i--){
				for (int j = 0; j < 5; j++){
					if (v[i][j] == 0){
						int k = i - 1;

						while (v[k][j] == 0 && k > 0){
							k--;
						}

						v[i][j] = v[k][j];
						v[k][j] = 0;
					}
				}
			}
		}

		printf("%d\n", sum);
	}

	return (0);
}