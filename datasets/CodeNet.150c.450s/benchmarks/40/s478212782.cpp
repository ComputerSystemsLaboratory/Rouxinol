

#include <iostream>
#include <string>

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


private:

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


int main()
{
	//
	int input[6];

	//
	string str = "";

	//サイコロの面の値を取得
	cin >> input[0] >> input[1] >> input[2] >> input[3] >> input[4] >> input[5];

	//
	cin >> str;

	//サイコロクラスの宣言
	Dice dice(input);

	//サイコロを指定の方向に転がす
	dice.ProcRoll(str);

	//
	cout << dice.face[0] << endl;


}
