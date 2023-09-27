

#include <iostream>
#include <string>
#include <random>

using namespace std;

//サイコロクラス
class Dice
{
public:
	int face[6];	//各面の値を保持
	
public:

	Dice(int val[])
	{
		face[0] = val[0];
		face[1] = val[1];
		face[2] = val[2];
		face[3] = val[3];
		face[4] = val[4];
		face[5] = val[5];
	}

	//サイコロを転がす処理
	void ProcRoll(string s)
	{
		for (int i = 0; i < (int)s.size(); ++i)
		{
			switch (s[i])
			{
			case 'E':
				RollE();
				break;

			case 'W':
				RollW();
				break;

			case 'N':
				RollN();
				break;

			case 'S':
				RollS();
				break;


			}
		}
	}

	//上面と前面の数字を決めて
	void SetDice()
	{
		//


	}

	//E方向に転がした時の処理
	void RollE()
	{
		//値の入れ替えは図を参照
		int tmp = face[0];
		face[0] = face[3];
		face[3] = face[5];
		face[5] = face[2];
		face[2] = tmp;
	}

	//W方向に転がした時の処理
	void RollW()
	{
		//値の入れ替えは図を参照
		int tmp = face[0];
		face[0] = face[2];
		face[2] = face[5];
		face[5] = face[3];
		face[3] = tmp;
	}

	//N方向に転がした時の処理
	void RollN()
	{
		//値の入れ替えは図を参照
		int tmp = face[0];
		face[0] = face[1];
		face[1] = face[5];
		face[5] = face[4];
		face[4] = tmp;
	}

	//S方向に転がした時の処理
	void RollS()
	{
		//値の入れ替えは図を参照
		int tmp = face[0];
		face[0] = face[4];
		face[4] = face[5];
		face[5] = face[1];
		face[1] = tmp;
	}


};

//
int main()
{
	//
	int input[6];

	//
	string str = "";

	//サイコロの面の値を取得
	cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5];


	//サイコロクラスの宣言
	Dice dice(input);

	//質問数を格納する
	int qnum = 0;

	//質問の数を設定
	cin >> qnum;

	//問題数でループ
	for (int i = 0; i < qnum; ++i)
	{
		//乱数生成
		random_device rd;

		//
		int num[2];

		//上面と前面の値を入力
		cin >> num[0] >> num[1];

		//
		while (true)
		{
			//0～3の乱数を生成
			int r = rd() % 4;

			//
			switch(r)
			{
				//0の場合はE方向に
				case 0:
					dice.RollE();
					break;

				//1の場合はN方向に
				case 1:
					dice.RollN();
					break;

				//2の場合はS方向に
				case 2:
					dice.RollS();
					break;

				//3の場合はW方向に
				case 3:
					dice.RollW();
					break;

				defaule:
					break;

			}

			//重なった場合は3の面の数字を出力して終了
			if (
				dice.face[0] == num[0] &&
				dice.face[1] == num[1]
				)
			{
				cout << dice.face[2] << endl;

				break;
			}

		}			
		
	}

}
