#include<iostream>
#include<algorithm>

int max = 0;
int r, c;

int retu(int data[11][10001]){
	int res = 0;

	for (int i = 0; i < c; i++){
		int cnt = 0;
		for (int j = 0; j < r; j++){
			if (data[j][i] == 0)cnt++;
		}
		if (cnt >= r / 2)continue;
		else{
			for (int j = 0; j < r; j++)data[j][i] = std::abs(data[j][i] - 1);
		}
	}

	for (int i = 0; i < r; i++){
		for (int j = 0; j < c; j++){
			if (data[i][j] == 0)res++;
		}
	}

	return res;
}

void gyo(int data[11][10001], int k, bool flg){

	if (k == r)return;

	if (flg){
		for (int i = 0; i < c; i++)data[k][i] = std::abs(data[k][i] - 1);
	}

	max = std::max(max, retu(data));

	gyo(data, k + 1, true);
	gyo(data, k + 1, false);

	return;
}

int main(){

	while (std::cin >> r >> c, r, c){

		int data[11][10001];
		max = 0;

		for (int i = 0; i < r; i++){
			for (int j = 0; j < c; j++){
				std::cin >> data[i][j];
			}
		}

		gyo(data, 0, true);
		gyo(data, 0, false);

		std::cout << max << std::endl;
	}

	return 0;
}