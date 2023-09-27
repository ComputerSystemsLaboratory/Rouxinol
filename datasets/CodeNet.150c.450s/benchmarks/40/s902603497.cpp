#include<iostream>
#include<cstdio>
#include<string>

using namespace std;

class Dice{
	private:
		int label[6];
	public:
		void initialize(int number[]);
		void command(char houkou);
		int getResult();
};

//ラベルに数字を代入
void Dice::initialize(int number[])
{
	for(int i = 0; i < 6; i++){
		label[i] = number[i];
	}
}

//命令を実行
void Dice::command(char houkou)
{
	int temp[6];
	for(int i = 0; i < 6; i++) {
		temp[i] = label[i];
	}
	
	if(houkou == 'E'){
		label[0] = temp[3];
		label[2] = temp[0];
		label[3] = temp[5];
		label[5] = temp[2];
	}
	else if(houkou == 'W'){
		label[0] = temp[2];
		label[2] = temp[5];
		label[3] = temp[0];
		label[5] = temp[3];
	}
	else if(houkou == 'N'){
		label[0] = temp[1];
		label[1] = temp[5];
		label[4] = temp[0];
		label[5] = temp[4];
	}
	else if(houkou == 'S'){
		label[0] = temp[4];
		label[1] = temp[0];
		label[4] = temp[5];
		label[5] = temp[1];
	}
}

//結果を取得
int Dice::getResult()
{
	return label[0];
}

int main(){
	Dice dice;
	int number[6];
	for(int i = 0; i < 6; i++){
		cin >> number[i];
	}
	dice.initialize(number);
		
	string meirei;
	cin >> meirei;
	for(int i = 0; i < meirei.length(); i++){
		dice.command(meirei[i]);
	}
	cout << dice.getResult() << endl;
	
	return 0;
}