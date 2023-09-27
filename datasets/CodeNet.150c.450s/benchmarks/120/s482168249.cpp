#include<iostream>
#include<algorithm>
#include<cstring>

int main(){

	int r, c;
	while (std::cin >> r >> c, r || c){

		int max = 0;

		int data[11][10001];
		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				std::cin >> data[i][j];
			}
		}

		for (int i = 0; i < (1 << r); i++){
			int copy[11][10001];
			memcpy(copy, data, sizeof(copy));

			int res = 0;

			for (int j = 0; j < r; j++){
				if ((i >> j) & 1){
					for (int k = 0; k < c; k++)copy[j][k] = (copy[j][k] + 1) % 2;
				}
			}

			for (int j = 0; j < c; j++){
				int cnt = 0;
				for (int k = 0; k < r; k++){
					if (copy[k][j])cnt++;
				}
				if (cnt < r - cnt)cnt = r - cnt;
				res += cnt;
			}

			max = std::max(max, res);
		}

		std::cout << max << std::endl;
	}

	return 0;
}