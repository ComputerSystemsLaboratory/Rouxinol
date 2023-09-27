#include <iostream>
#include <vector>

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
	/*Dice::turn：指定された上面、全面になるようにさいころを転がす*/
	void turn(int, int);
	/*fNumで指定された面の数字を返す*/
	int getNumber(int fNum){ return face[fNum]; }
	/*指定された数字が、どの面にあるか返す*/
	int getLabel(int);
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
		tmp[faceNum] = Dice::face[faceNum];
	}
	for (size_t faceNum = 0; faceNum < FACE_SIZE; faceNum++)
	{
		//faceNum面の数字を更新する
		int num = afterFace[faceNum];
		Dice::face[faceNum] = tmp[num];
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
	//z軸中心の右回転
	else if (command == 'R'){
		int afterFace[FACE_SIZE] = { TOP, WEST, SOUTH, NORTH, EAST, BOTTOM };
		Dice::swapFace(afterFace);
	}
}


//参考： enum FaceNumber{ TOP, SOUTH, EAST, WEST, NORTH, BOTTOM }
//commandで指定された方向にさいころを転がす
void Dice::turn(int top, int front){
	while (Dice::face[TOP] != top && Dice::face[SOUTH] != front){
		Dice::turn('N');
	}
	if (Dice::face[TOP] == top){
		while (Dice::face[SOUTH] != front){
			Dice::turn('R');
		}
	}
	else if (Dice::face[SOUTH] == front){
		while (Dice::face[TOP] != top){
			Dice::turn('W');
		}
	}
}

/*指定された数字が、どの面にあるか返す*/
int Dice::getLabel(int Num){
	int label;
	for (size_t i = 0; i < FACE_SIZE; i++)
	{
		if (Dice::face[i] == Num){
			label = i;
			break;
		}
	}
	return label;
}

int main(){
	Dice dice1 = Dice();
	int commands_size;
	int topNumber;
	int frontNumber;
	int topLabel;
	int frontLabel;


	std::cin >> commands_size;

	for (size_t i = 0; i < commands_size; i++)
	{
		std::cin >> topNumber >> frontNumber;

		dice1.turn(topNumber, frontNumber);
		std::cout << dice1.getNumber(EAST) << std::endl;
	}

	return 0;
}
