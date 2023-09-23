#include <iostream>
#include <math.h>

int main(){
	int Num;//要素数
	std::cin >> Num;

	int* Elem = new int[Num];//要素代入
	for (int i = 0; i < Num; ++i){
		std::cin >> Elem[i];
	}

	int primecount = 0;//約数の存在を調べ素数判定
	bool isprime = false;
	for (int i = 0; i < Num; ++i){//約数の存在判定
		if (Elem[i] % 2 == 0){//数値が偶数
			if (Elem[i] == 2)++primecount;//数値が2
			continue;
		}

		//数値が奇数
		isprime = true;
		for (int j = 3; j <= sqrt(Elem[i]); j += 2){
			if (Elem[i] % j == 0){
				isprime = false;
				break;
			}
		}
		if (isprime)++primecount;
	}

	std::cout << primecount << std::endl;

	return 0;
}