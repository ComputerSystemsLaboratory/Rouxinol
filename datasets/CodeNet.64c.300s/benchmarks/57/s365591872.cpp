#include<iostream>
#include<algorithm>
#include<cstring>

int r, c, res = 0;
int data[11][10001], buf[11][10001];

void reverse(int *ose){
	for (int i = 0; i < c; i++){
		ose[i] = (ose[i] + 1) % 2;
	}
}

int main(){
	while (std::cin >> r >> c, r || c){

		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				std::cin >> data[i][j];
			}
		}

		int rev = (1 << 10);
		for (int i = 0; i < rev; i++){
			memcpy(buf, data, sizeof(buf));
			int ans = 0;

			for (int j = 0; j < r; j++){
				if ((i >> j) & 1)reverse(buf[j]);
			}

			for (int j = 0; j < c; j++){
				int count = 0;
				for (int k = 0; k < r; k++)if (buf[k][j] == 1)count++;
				ans += std::max(count, r - count);
			}

			res = std::max(res, ans);
		}

		std::cout << res << std::endl;
	}

	return 0;
}