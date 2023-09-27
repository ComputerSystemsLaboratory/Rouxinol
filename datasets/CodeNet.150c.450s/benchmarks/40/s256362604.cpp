#include<iostream>
#include<algorithm>
#include<string>
class DICE {
private:
	 int label[6];
public:
	//?????????????????????
	DICE();
	void RotateLabel(char DIRECTION);
	int ReturnTopLabel(void);
	};
DICE::DICE() {
	for (unsigned int i = 0; i < 6; ++i) {
		std::cin >> label[i];
	}
}
void DICE::RotateLabel(char DIRECTION) {
	if (DIRECTION == 'N') {
		std::swap(label[5], label[4]);
		std::swap(label[4], label[0]);
		std::swap(label[1], label[0]);
	}
	if (DIRECTION == 'S') {
		std::swap(label[1], label[0]);
		std::swap(label[4], label[0]);
		std::swap(label[5], label[4]);


	}
	if (DIRECTION == 'E') {
		std::swap(label[5], label[2]);
		std::swap(label[2], label[0]);
		std::swap(label[0], label[3]);


	}
	if (DIRECTION == 'W') {
		std::swap(label[0], label[3]);
		std::swap(label[2], label[0]);
		std::swap(label[5], label[2]);
	}
}
int DICE::ReturnTopLabel(void) {
	return label[0];
}
int main(void) {
	DICE dice1 = DICE();
	std::string InputAction;
	std::cin >> InputAction;
	for (unsigned int i = 0; i < InputAction.size(); ++i) {
		dice1.RotateLabel(InputAction[i]);
	}
	std::cout << dice1.ReturnTopLabel() << std::endl;
	//system("pause");
	return 0;
}