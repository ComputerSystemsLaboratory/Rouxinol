#include <iostream>
#include <vector>
//#include <math.h>
//#include <string>
#include <cmath>
#include <iomanip>

int main();

//最初に素数リストを作成し、入力された値に対してリストを参照する。
int main(){
	int w;		//縦線の本数
	int n;		//横棒の本数
	int lines[31];		//ライン番号

	std::cin >> w >> n;
	
	//ライン番号初期化
	//範囲に注意
	for (int i = 1; i <= w; i++){
		lines[i] = i;
	}
	for (int i = 0; i < n; i++){
		int x;
		int y;
		char comma;

		std::cin >> x >> comma >> y;
		//交換処理
		int temp;
		temp = lines[x];
		lines[x] = lines[y];
		lines[y] = temp;
	}
	//結果出力
	//範囲に注意
	for (int i = 1; i <= w; i++){
		std::cout << lines[i] << std::endl;
	}

	//while (1);
	return 0;
}
