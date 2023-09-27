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
	void SpinLabel(void);
	int ReturnTopLabel(void);
	int ReturnRightLabel(int Top, int Front);
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
void DICE::SpinLabel(void) {
	std::swap(label[1], label[2]);
	std::swap(label[1], label[3]);
	std::swap(label[3], label[4]);
}
int DICE::ReturnTopLabel(void) {
	return label[0];
}
int DICE::ReturnRightLabel(int Top, int Front) {
	if (label[2] == Top || label[3] == Top) {
		RotateLabel('E');
	}
	while (label[0] != Top) {
		RotateLabel('N');
	}
	while (label[1] != Front) {
		SpinLabel();
	}
	return label[2];
}
int main(void) {
	DICE dice1 = DICE();
	int NumberQuestion;
	std::cin >> NumberQuestion;
	for (int i = 0; i < NumberQuestion; ++i) {
		int LabelTop, LabelFront;
		std::cin >> LabelTop >> LabelFront;
		std::cout << dice1.ReturnRightLabel(LabelTop, LabelFront) << std::endl;
	}
//system("pause");
	return 0;
}