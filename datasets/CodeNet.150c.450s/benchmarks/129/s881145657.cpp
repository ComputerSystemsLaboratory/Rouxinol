#include<iostream>
//#include<vector>
int main(void) {
	int Row, Coloum;
	std::cin >> Row >> Coloum;
	int ElementRow = Row + 1, ElementColoum = Coloum + 1;
	//std::vector<std::vector<int>>Matrix(ElementRow, std::vector<int>(ElementColoum));
	int Matrix[101][101] = {};
	for (int R = 0; R < Row; ++R) {
		for (int C = 0; C < Coloum; ++C) {
			std::cin >> Matrix[R][C];
			Matrix[R][Coloum] += Matrix[R][C];
		}
	}
	for (int C = 0; C < ElementColoum; ++C) {
		for (int R = 0; R < Row; ++R) {
			Matrix[Row][C] += Matrix[R][C];
		}
	}
	for (int R = 0; R < ElementRow; ++R) {
		for (int C = 0; C < ElementColoum; ++C) {
			if(C== ElementColoum-1){ std::cout << Matrix[R][C] ;
			break;
			}
			std::cout << Matrix[R][C] << " ";
		}
		std::cout << std::endl;
	}
//	system("pause");
	return 0;
}