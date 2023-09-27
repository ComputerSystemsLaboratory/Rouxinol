#include <iostream>
#include <string>

using namespace std;

class Dice
{
//              ----------
//		       | S[0]     |
//             |          |
//             |          |
//             |          |
//  --------------------------------------------
//  | S[3]     | S[1]     | S[2]     | S[4]    |
//  |          |          |          |         |
//  |          |          |          |         |
//  |          |          |          |         |
//  |-------------------------------------------
//             | S[5]     |
//             |          |
//             |          |
//             |          |
//              ----------
//
//
private:
	int S[6];		//サイコロの各面の整数を格納する配列
	int top_id;		//サイコロ上面を示す配列添字
	int left_id;	//サイコロ左側面を示す配列添字
	int right_id;	//サイコロ右側面を示す配列添字
	int front_id;	//サイコロ手前の面を示す配列添字
	int back_id;	//サイコロ奥側の面を示す配列添字
	int bottom_id;	//サイコロ底面の面を示す配列添字

public:

	//コンストラクタ
	Dice()
	{
		//サイコロの各面の整数を入力する
		input_surface();

		//初期状態の面を指す配列添字を指定
		top_id = 0;
		left_id = 3;
		right_id = 2;
		front_id = 1;
		back_id = 4;
		bottom_id = 5;

		//output_surface();
	}

	//サイコロの各面の整数を入力する関数
	void input_surface(void)
	{
		for(int i = 0; i < 6; i++)
		{
			cin >> S[i];
		}
	}

	//サイコロを転がす命令を実行
	void exec_operation(const string &opr)
	{
		for(int pos = 0; pos < opr.size(); pos++)
		{
			roll_dice( opr[pos] );
			//output_surface();
		}

		//上面のサイコロの値を出力
		cout << S[top_id] << endl;
	}

	//指定した方向にサイコロを転がす処理を実施
	void roll_dice(const char direction)
	{
		int tmp;

		switch(direction)
		{
			//東方向
			case 'E':
				tmp = top_id;
				top_id = left_id;		//left -> top
				left_id = bottom_id;	//bottom -> left
				bottom_id = right_id;	//right -> bottom
				right_id = tmp;			//top -> right
				break;
			//北方向
			case 'N':
				tmp = top_id;
				top_id = front_id;		//front -> top
				front_id = bottom_id;	//bottom -> front
				bottom_id = back_id;	//back -> bottom
				back_id = tmp;			//top -> back
				break;
			//南方向
			case 'S':
				tmp = top_id;
				top_id = back_id;		//back -> top
				back_id = bottom_id;	//bottom -> back
				bottom_id = front_id;	//front -> bottom
				front_id = tmp;			//top -> front
				break;
			//西方向
			case 'W':
				tmp = top_id;
				top_id = right_id;		//right -> top
				right_id = bottom_id;	//bottom -> right
				bottom_id = left_id;	//left -> bottom
				left_id = tmp;			//top -> left
				break;
			default:
				cout << "[fail]invalid direction" << endl;
				break;
		}
	}
	
	//確認用
	void output_surface(void)
	{
		cout << "S[top] = " << S[top_id] << endl;
		cout << "S[left] = " << S[left_id] << endl;
		cout << "S[right] = " << S[right_id] << endl;
		cout << "S[bottom] = " << S[bottom_id] << endl;
		cout << "S[front] = " << S[front_id] << endl;
		cout << "S[back] = " << S[back_id] << endl;
		cout << "-----------------------------" << endl;
	}
	
};

int main(void)
{
	Dice dice;
	string operation;	//命令を示す文字列

	cin >> operation;		//命令を入力

	dice.exec_operation( operation );
	
	return 0;
}

