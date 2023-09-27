#include<iostream>
#include<string>
using namespace std;

class Dise {
public:
	Dise(int*);
	//てっぺんは0番
	int DiseNumber[6];
};

Dise::Dise(int *InputNumber) 
{
	for (int i = 0; i < 6; i++) {
		DiseNumber[i] = InputNumber[i];
	}
}

//文字ごとに処理振り分け
void Distributes(char ch,Dise *dise) 
{
	if (ch == 'S') {
		swap(dise->DiseNumber[0], dise->DiseNumber[1]);
		swap(dise->DiseNumber[0], dise->DiseNumber[5]);
		swap(dise->DiseNumber[0], dise->DiseNumber[4]);
	}
	else if (ch == 'E') {
		swap(dise->DiseNumber[0], dise->DiseNumber[2]);
		swap(dise->DiseNumber[0], dise->DiseNumber[5]);
		swap(dise->DiseNumber[0], dise->DiseNumber[3]);
	}
	else if (ch == 'W') {
		swap(dise->DiseNumber[0], dise->DiseNumber[3]);
		swap(dise->DiseNumber[0], dise->DiseNumber[5]);
		swap(dise->DiseNumber[0], dise->DiseNumber[2]);
	}
	else {
		swap(dise->DiseNumber[0], dise->DiseNumber[4]);
		swap(dise->DiseNumber[0], dise->DiseNumber[5]);
		swap(dise->DiseNumber[0], dise->DiseNumber[1]);
	}
}

int main()
{
	//classDise
	int DiseNumber[6];
	string comand;

	//入力
	for (int i = 0; i < 6; i++) {
		cin >> DiseNumber[i];
	}

	Dise dise(DiseNumber);

	//命令入力
	cin >> comand;

	//転がす
	for (unsigned int i = 0; i < comand.size(); i++) {
		//処理ごとに振り分け
		Distributes(comand[i],&dise);
	}

	//結果
	cout << dise.DiseNumber[0] << endl;

	return 0;
}
