//Misterious Gems
#include <iostream>

using namespace std;

enum Direction{
	N = 1,//y+
	E = 2,//x+
	S = 3,//y-
	W = 4///x-
};

struct Order{
	Direction dir;
	int length;
};

int main(){
	int MaxN;//宝石最大数
	bool GemField[21][21];//宝石の有無保持用フィールド[y][x]
	bool RobotField[21][21];//ロボット通過情報保持用フィールド[y][x]
	int MaxM;//命令数
	Order Ord[30];//命令
	int RobotX, RobotY;//ロボット位置
	bool Gettable;//収集可能性

	int i, j, k, l;//使用する一時変数
	char c;//使用する一時変数

	while (1){
		//フィールド初期化
		for (i = 0; i < 21; ++i){
			for (j = 0; j < 21; ++j){
				GemField[i][j] = false;
				RobotField[i][j] = false;
			}
		}
		RobotField[10][10] = true;
		RobotX = 10; RobotY = 10;
		Gettable = true;
		//代入
		cin >> MaxN;
		if (MaxN == 0)break;
		for (i = 0, j = 0, k = 0; i < MaxN; ++i){
			cin >> j >> k;
			GemField[k][j] = true;
		}
		cin >> MaxM;
		for (i = 0, c = 0; i < MaxM; ++i){
			cin >> c >> Ord[i].length;
			switch(int(c)){
			case 'N':
				Ord[i].dir = N;
				break;
			case 'E':
				Ord[i].dir = E;
				break;
			case 'W':
				Ord[i].dir = W;
				break;
			case 'S':
				Ord[i].dir = S;
				break;
			}
		}

		//命令実行&RobotFieldに反映
		for (i = 0, k = 0, l = 0; i < MaxM; ++i){
			//方向決定
			k = (Ord[i].dir % 2 == 0) ? 1 : 0;//偶数ならX
			l = (Ord[i].dir % 2 == 0) ? 0 : 1;//奇数ならY
			if (Ord[i].dir >= 3){
				k *= -1; l *= -1;
			}
			//移動
			for (int j = 0; j < Ord[i].length; ++j){
				RobotX += k; RobotY += l;
				RobotField[RobotY][RobotX] = true;
			}
		}

		//全収集チェック
		for (i = 0; i < 21 && Gettable ; ++i){
			for (j = 0; j < 21 && Gettable; ++j){
				if (GemField[j][i] && !RobotField[j][i])Gettable = false;
			}
		}

		//出力
		cout << (Gettable ? "Yes" : "No") << endl;
	}

	return 0;
}