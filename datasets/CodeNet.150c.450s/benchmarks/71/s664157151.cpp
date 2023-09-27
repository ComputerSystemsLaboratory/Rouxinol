#include <iostream>
#include <vector>
#include <math.h>
#include <string>

int main(void);
int combination(int n);
bool combination_sub();

int main(){
	int n;				//入力されるデータセット
	int cnt = 0;		//データセット入力カウント
	int result[50];		//組み合わせ個数を格納する配列

	while (std::cin >> n){
	//while (cnt < 2){
		//std::cin >> n;
		result[cnt] = combination(n);
		cnt++;
	}

	for (int i = 0; i < cnt; i++){
		std::cout << result[i] << std::endl;
	}

	//while (1);
	return 0;
}

int combination(int n){
	int rtn = 0;
	
	//全部同じ場合
	for (int x = 0; x <= 9; x++){
		if (x * 4 == n){
			rtn++;
		}
	}

	//「全部同じ」以外の場合
	for (int a = 0; a <= 9; a++){
		for (int b = 0; b <= 9; b++){
			for (int c = 0; c <= 9; c++){
				for (int d = 0; d <= 9; d++){
					if (!((a == b) && (a == c) && (a == d))){
						if ((a + b + c + d) == n){
							rtn++;
						}
					}
				}
			}
		}
	}

	return rtn;
}
