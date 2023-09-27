#include <iostream>

using namespace std;

#define ISEQUAL(i,a,b,c) Data[a][i] == Data[b][i] && Data[b][i] == Data[c][i] && Data[a][i] != 0

int main(){
	int RowNum = 0;//行数
	int* Data[5];//数値データ[列][行]
	int Points = 0;//ポイント
	bool IsComprete = false;//ルーチン終了判定用
	bool Checker[5] = { false };//行ごと消去判定用
	bool IsFall = true;//落下判定
	int FirstZeroPos = 0;//落下判定時ゼロ位置保持用

	while(1){
		cin >> RowNum;
		if (RowNum == 0)break;
		//データ代入
		for (int i = 0; i < 5; ++i){
			Data[i] = new int[RowNum];
		}
		for (int i = 0; i < RowNum; ++i){
			for (int j = 0; j < 5; ++j){
				cin >> Data[j][i];
			}
		}

		Points = 0;
		IsComprete = false;

		//ゲームルーチン
		while (!IsComprete){
			IsComprete = true;
			for (int i = 0; i < RowNum; ++i){//上から行ごとに
				for (int j = 0; j < 5; ++j){//判定用変数初期化
					Checker[j] = false;
				}
				for (int j = 0; j < 3; ++j){//消滅判定
					if (ISEQUAL(i, j, j + 1, j + 2)){
						Checker[j] = true; Checker[j + 1] = true;
						Checker[j + 2] = true;
						IsComprete = false;//消滅判定時未終了と判断
					}
				}
				for (int j = 0; j < 5; ++j){//消滅処理
					if (Checker[j]){
						Points += Data[j][i];
						Data[j][i] = 0;
					}
				}
			}
			//落下処理
			for (int j = 0; j < 5; ++j){//列ごとに
				IsFall = true;
				while (IsFall){
					FirstZeroPos = -1; IsFall = false;
					for (int i = RowNum - 1; i >= 0; --i){//下から
						if (FirstZeroPos == -1){
							if (Data[j][i] == 0)FirstZeroPos = i;
						} else {
							if (Data[j][i] != 0){
								Data[j][FirstZeroPos] = Data[j][i];
								Data[j][i] = 0;
								IsFall = true;
								break;
							}
						}
					}
				}
			}
		}

		cout << Points << endl;

		for (int i = 0; i < 5; ++i){
			delete[] Data[i];
		}

	}
	return 0;
}