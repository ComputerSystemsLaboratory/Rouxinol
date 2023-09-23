#include<iostream>

int table[10][10000], R, C;

int reverse(int S){//S: 縦の裏返すところの集合
	for(int i=0;i<R;i++){
		if(S >> i & 1){
			for(int j=0;j<C;j++){
				table[i][j] = !table[i][j];
			}
		}
	}

	int res = 0;
	for(int i=0;i<C;i++){
		int white = 0, black = 0;
		for(int j=0;j<R;j++){
			white += !table[j][i];
			black += table[j][i];
		}
		res += std::max(white, black);
	}

	for(int i=0;i<R;i++){
		if(S >> i & 1){
			for(int j=0;j<C;j++){
				table[i][j] = !table[i][j];
			}
		}
	}

	return res;
}

int main(){
	while(std::cin >> R >> C, R){
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				std::cin >> table[i][j];
			}
		}

		int res = 0;
		for(int S=0;S<1<<R;S++){
			res = std::max(res, reverse(S));
		}

		std::cout << res << std::endl;
	}
}