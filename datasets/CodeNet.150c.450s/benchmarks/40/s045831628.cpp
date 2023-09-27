#include <iostream>

/*さいころの面の数*/
const unsigned int FACE_SIZE = 6;

/*さいころの面の位置と、配列の番号の対応*/
enum FaceNumber{ TOP, SOUTH, EAST, WEST, NORTH, BOTTOM };

class Dice{
	private:
		/*face[i]はi面の数字
		 *iは{ TOP, SOUTH, EAST, WEST, NORTH, BOTTOM }のどれかを取る*/
		int face[FACE_SIZE];
		/*swapFace：引数で指定した順番にfaceを入れ替える関数*/
		void swapFace(int[FACE_SIZE]);
	public:
		/*Dice():入力された6つの数値でfaceを初期化*/
		Dice();
		/*Dice::turn：commandで指定された方向にさいころを転がす*/
		void turn(char command);
		/*fNumで指定された面の数字を返す*/
		int getFace(int fNum){ return face[fNum]; }
};

/*Dice():入力された6つの数値でfaceを初期化*/
Dice::Dice(){
	for (size_t i = 0; i < FACE_SIZE; i++)
	{
		std::cin >> face[i];
	}
}

/*swapFace：引数で指定した配列の順番にfaceを入れ替える関数
 *配列の中身が{ WEST, SOUTH, TOP, BOTTOM, NORTH, EAST }なら、
 *face[TOP]をface[WEST]に、face[SOUTH]はそのまま、face[EAST]をface[TOP]に・・・
 *というように入れ替える
 *参考： enum FaceNumber{ TOP, SOUTH, EAST, WEST, NORTH, BOTTOM }
*/
void Dice::swapFace(int* afterFace){
	int tmp[FACE_SIZE];									//変更前のさいころの面を保存する一時変数
	for (size_t faceNum = 0; faceNum < FACE_SIZE; faceNum++)
	{
		tmp[faceNum] = face[faceNum];
	}
	for (size_t faceNum = 0; faceNum < FACE_SIZE; faceNum++)
	{
		//faceNum面の数字を更新する
		int num = afterFace[faceNum];
		face[faceNum] = tmp[num];
	}
}

//commandで指定された方向にさいころを転がす
void Dice::turn(char command){
	if (command == 'E'){
		int afterFace[FACE_SIZE] = { WEST, SOUTH, TOP, BOTTOM, NORTH, EAST };
		Dice::swapFace(afterFace);
	}
	else if (command == 'N'){
		int afterFace[FACE_SIZE] = { SOUTH, BOTTOM, EAST, WEST, TOP, NORTH };
		Dice::swapFace(afterFace);
	}
	else if (command == 'S'){
		int afterFace[FACE_SIZE] = { NORTH, TOP, EAST, WEST, BOTTOM, SOUTH };
		Dice::swapFace(afterFace);
	}
	else if (command == 'W'){
		int afterFace[FACE_SIZE] = { EAST, SOUTH, BOTTOM, TOP, NORTH, WEST };
		Dice::swapFace(afterFace);
	}
}

int main(){
	Dice dice1 = Dice();
	char commands[100];

	std::cin >> commands;

	for (size_t i = 0; commands[i] != '\0'; i++)
	{
		dice1.turn(commands[i]);
	}

	std::cout << dice1.getFace(TOP) << std::endl;
	
	return 0;
}
