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
	int S[6];	//サイコロの各面の整数を格納する配列
	int top_id;	//サイコロ上面を示す配列添字
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
	}

	//サイコロの各面の整数を入力する関数
	void input_surface(void)
	{
		for(int i = 0; i < 6; i++)
		{
			cin >> S[i];
		}
	}

	//指定した方向にサイコロを転がす処理を実施
	void roll_dice(const char direction)
	{
		int tmp;

		switch(direction)
		{
			//東方向
			case 'E':
				tmp = S[top_id];
				S[top_id] = S[left_id];		//left -> top
				S[left_id] = S[bottom_id];	//bottom -> left
				S[bottom_id] = S[right_id];	//right -> bottom
				S[right_id] = tmp;			//top -> right
				break;
			//北方向
			case 'N':
				tmp = S[top_id];
				S[top_id] = S[front_id];	//front -> top
				S[front_id] = S[bottom_id];	//bottom -> front
				S[bottom_id] = S[back_id];	//back -> bottom
				S[back_id] = tmp;			//top -> back
				break;
			//南方向
			case 'S':
				tmp = S[top_id];
				S[top_id] = S[back_id];		//back -> top
				S[back_id] = S[bottom_id];	//bottom -> back
				S[bottom_id] = S[front_id];	//front -> bottom
				S[front_id] = tmp;			//top -> front
				break;
			//西方向
			case 'W':
				tmp = S[top_id];
				S[top_id] = S[right_id];		//right -> top
				S[right_id] = S[bottom_id];		//bottom -> right
				S[bottom_id] = S[left_id];		//left -> bottom
				S[left_id] = tmp;				//top -> left
				break;
			//横方向
			case 'M':
				tmp = S[left_id];
				S[left_id] = S[front_id];
				S[front_id] = S[right_id];
				S[right_id] = S[back_id];
				S[back_id] = tmp;
				break;
			default:
				cout << "[fail]invalid direction" << endl;
				break;
		}
	}

	//サイコロ上面の数と前面の数に合致するようサイコロを回転させる
	void RotateDice_match_top_front(int top_val, int front_val)
	{
		//南北方向に回転させて一致するダイス面があるか確認
		for(int i = 0; i < 3; i++)
		{
			if( S[top_id] != top_val )
			{
				roll_dice('S');	
			}
			else
			{
				break;
			}
		}

		//南北方向に回転させても一致するダイス面が無い場合は
		//東西方向に回転させてみる
		if( S[top_id] != top_val)
		{
			//東西方向に回転
			for(int i = 0; i < 3; i++)
			{
				roll_dice('W');
				if( S[top_id] == top_val) break;
			}
		}

		//上面が確定したら前面に一致するダイス面を探す
		for(int i = 0; i < 3; i++)
		{
			if( S[front_id] != front_val)
			{
				roll_dice('M');
			}
			else
			{
				break;
			}	
		}
		cout << S[right_id] << endl;
	}
};

int main(void)
{
	int q;				//質問の数
	Dice dice;

	//質問の数を入力
	cin >> q;
	
	//q行分，質問と回答を実施
	for(int i = 0; i < q; i++)
	{
		int top_val;	//サイコロ上面の数
		int front_val;	//サイコロ前面の数

		cin >> top_val >> front_val;
		dice.RotateDice_match_top_front(top_val, front_val);
	}
	return 0;
}

