#include<iostream>
int main(void) {
	int MAX=-1, RESULT=-1;
	while (1) {
		int NumberOfCases = 0;
		std::cin >> MAX >> RESULT;
		if (MAX == 0 && RESULT == 0) { break; }
		for (int i = MAX; i > 0; i--) {
			for (int j = i - 1; j > 0; j--) {
				for (int k = j - 1; k > 0; k--) {
					if (i + j + k == RESULT) { NumberOfCases++; }
				}
			}
		}
		std::cout << NumberOfCases << std::endl;
	}
//	system("pause");
	return 0;
}