//Volume5 -> 0501

#include <iostream>
#include <vector>
//#include <math.h>
//#include <string>
#include <cmath>
#include <iomanip>

int main();

int main(){
	std::vector<int> totalAPoint;		//Aの得点
	std::vector<int> totalBPoint;		//Bの得点
	int dataSetCount = 0;				//ゲーム数

	while (1){
		int n = 0;		//1ゲームの入力数

		std::cin >> n;
		//n=0で終了
		if (n == 0){
			break;
		}

		dataSetCount++;

		int aPoint = 0;		//1ゲームにおけるAの得点
		int bPoint = 0;		//1ゲームにおけるBの得点

		for (int i = 0; i < n; i++){
			int tempA;
			int tempB;

			std::cin >> tempA >> tempB;
			if (tempA > tempB){
				aPoint += (tempA + tempB);
			}
			else if (tempA < tempB){
				bPoint += (tempA + tempB);
			}
			//引き分け
			else{
				aPoint += tempA;
				bPoint += tempB;
			}
		}

		totalAPoint.push_back(aPoint);
		totalBPoint.push_back(bPoint);
	}

	//結果出力
	for (int i = 0; i < dataSetCount; i++){
		std::cout << totalAPoint[i] << " " << totalBPoint[i] << std::endl;
	}

	//while (1);
	return 0;
}
