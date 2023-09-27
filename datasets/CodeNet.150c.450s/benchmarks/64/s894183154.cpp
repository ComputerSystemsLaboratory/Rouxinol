#include<iostream>
#include<vector>
int main(void) {
	int n, q;
	int InputA, InputM;
	int Max = 0;
	std::cin >> n;
	std::vector<bool>AnswerBox(2001, false);
	AnswerBox[0] = true;
	for (int i = 0; i < n; ++i) {
		std::cin >> InputA;
		Max += InputA;
		for (int j = Max; j >= 0; --j) {
			if (InputA + j < 2001) {
				AnswerBox[InputA + j] = AnswerBox[j] | AnswerBox[InputA + j];
			}
		}
	}
	std::cin >> q;
	for (int i = 0; i < q; ++i) {
		std::cin >> InputM;
		std::cout << (AnswerBox[InputM] ? "yes" : "no") << "\n";
	}
	//	system("pause");
	return 0;
}