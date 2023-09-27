#define _USE_MATH_DEFINES //円周率を使用
#include <math.h>
#include <iomanip> //小数点以下を表示
#include <iostream>
#include <cstring> //文字列操作
using namespace std;

//【関数の定義】

int main(void)
{
	int dice[6] = { 0, 0, 0, 0, 0, 0 }; //サイコロの各面（ex.1の面->dice[0]）
	int dicefirst[6] = { 0, 0, 0, 0, 0, 0 }; //サイコロの最初の各面
	int diceside[24][2]; //上面->dice[0]、右面->dice[1]
	int dummy = 0; //サイコロの面の数字のダミー
	char len[101]; //方角
	int i, j, k; //カウンタ変数
	int count = 0;
	int question = 0; //質問数

	for (i = 0; i < 6; i++) //サイコロの面の入力
	{
		cin >> dice[i];
	}

	cin >> question; //質問数を入力

	for(i = 0; i < question; i++) //サイコロの上面および前面の入力
	{
		for (j = 0; j < 2; j++)
		{
			cin >> diceside[i][j];
		}
	}

	for (k = 0; k < 6; k++) //サイコロの初期値を記憶
	{
		dicefirst[k] = dice[k];
	}

	for (i = 0; i < question; i++)
	{
		while (dice[0] != diceside[i][0]) //サイコロの上面を調べる
		{
			if (count == 4)
			{
				dummy = 0; //ダミーの初期化
				//以下、Eの動き
				dummy = dice[5];
				dice[5] = dice[2];
				dice[2] = dice[0];
				dice[0] = dice[3];
				dice[3] = dummy;
				count = 0;
			}

			dummy = 0; //ダミーの初期化
			//以下、Sの動き
			dummy = dice[5];
			dice[5] = dice[1];
			dice[1] = dice[0];
			dice[0] = dice[4];
			dice[4] = dummy;
			count++;
		}

		while (dice[1] != diceside[i][1]) //サイコロの前面を調べる
		{
			dummy = 0; //ダミーの初期化
			//以下、横の動き
			dummy = dice[3];
			dice[3] = dice[4];
			dice[4] = dice[2];
			dice[2] = dice[1];
			dice[1] = dummy;
		}

		cout << dice[2] << endl;

		for (k = 0; k < 6; k++)
		{
			dice[k] = dicefirst[k];
		}
	}


	return 0;
}
