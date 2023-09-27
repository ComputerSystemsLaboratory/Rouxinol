#include <iostream>

int main(){
	int Num = 0;//要素数
	std::cin >> Num;//要素数取得

	int* Elem = new int[Num];
	for (int i = 0; i < Num; ++i){//データ入力
		std::cin >> Elem[i];
	}

	int v = 0, j = 0;
	for (int i = 1; i < Num; ++i){

		std::cout << Elem[0];//出力
		for (int c = 1; c < Num; ++c){
			std::cout << " " << Elem[c];
		}
		std::cout << std::endl;

		v = Elem[i];//ソート
		j = i - 1;
		while (j >= 0 && Elem[j]>v){
			Elem[j + 1] = Elem[j];
			--j;
		}
		Elem[j + 1] = v;
	}

	std::cout << Elem[0];//出力
	for (int c = 1; c < Num; ++c){
		std::cout << " " << Elem[c];
	}
	std::cout << std::endl;

	delete[] Elem;
	return 0;
}