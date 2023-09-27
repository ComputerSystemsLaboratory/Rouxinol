#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	int square_x[256];
	int square_y[256];

	while (true){
		scanf("%d", &n);

		if (n == 0){
			break;
		}

		for (int i = 0; i < 256; i++){
			square_x[i] = square_y[i] = 0;
		}
		square_x[0] = square_y[0] = 1;

		int nico, chino;
		for (int i = 1; i < n; i++){
			scanf("%d %d", &nico, &chino);

			switch (chino){
				case 0:
					square_x[i] = square_x[nico] - 1;
					square_y[i] = square_y[nico];
					break;
				case 1:
					square_x[i] = square_x[nico];
					square_y[i] = square_y[nico] - 1;
					break;
				case 2:
					square_x[i] = square_x[nico] + 1;
					square_y[i] = square_y[nico];
					break;
				case 3:
					square_x[i] = square_x[nico];
					square_y[i] = square_y[nico] + 1;
					break;
			}
		}

		for (int i = 0; i < n - 1; i++){
			for (int j = i + 1; j < n; j++){
				if (square_x[i] > square_x[j]){
					square_x[i] ^= square_x[j];
					square_x[j] ^= square_x[i];
					square_x[i] ^= square_x[j];
				}
				if (square_y[i] > square_y[j]){
					square_y[i] ^= square_y[j];
					square_y[j] ^= square_y[i];
					square_y[i] ^= square_y[j];
				}
			}
		}

		printf("%d %d\n", square_x[n - 1] - square_x[0] + 1, square_y[n - 1] - square_y[0] + 1);
	}

	return (0);
}