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
	}

	//サイコロの各面の整数を入力する関数
	void input_surface(void)
	{
		for(int i = 0; i < 6; i++)
		{
			cin >> S[i];
		}
	}

	//質問に対する面の数を回答する
	void AnswerSurface(int top_val, int front_val)
	{
		int top_match_id;
		int front_match_id;
		int right_surface_id;

		//上面と前面と一致する面を探す
		for(int i = 0; i < 6; i++)
		{
			if( S[i] == top_val)
			{
				top_match_id = i;
			}

			if( S[i] == front_val)
			{
				front_match_id = i;
			}
		}

		//初期の上面の位置と比較する
		if( top_match_id == top_id)
		{
			if(front_match_id == front_id)
			{
				right_surface_id = right_id;
			}
			else if(front_match_id == right_id)
			{
				right_surface_id = back_id;
			}
			else if(front_match_id == back_id)
			{
				right_surface_id = left_id;
			}
			else if(front_match_id == left_id)
			{
				right_surface_id = front_id;
			}
		}
		else if(top_match_id == front_id)
		{
			if(front_match_id == top_id)
			{
				right_surface_id = left_id;
			}
			else if(front_match_id == right_id)
			{
				right_surface_id = top_id;
			}
			else if(front_match_id == left_id)
			{
				right_surface_id = bottom_id;
			}
			else if(front_match_id == bottom_id)
			{
				right_surface_id = right_id;
			}			
		}
		else if(top_match_id == back_id)
		{
			if(front_match_id == top_id)
			{
				right_surface_id = right_id;
			}
			else if(front_match_id == right_id)
			{
				right_surface_id = bottom_id;
			}
			else if(front_match_id == left_id)
			{
				right_surface_id = top_id;
			}
			else if(front_match_id == bottom_id)
			{
				right_surface_id = left_id;
			}
		}		
		else if(top_match_id == right_id)
		{
			if(front_match_id == top_id)
			{
				right_surface_id = front_id;
			}
			else if(front_match_id == bottom_id)
			{
				right_surface_id = back_id;
			}
			else if(front_match_id == front_id)
			{
				right_surface_id = bottom_id;
			}
			else if(front_match_id == back_id)
			{
				right_surface_id = top_id;
			}
		}
		else if(top_match_id == left_id)
		{
			if(front_match_id == top_id)
			{
				right_surface_id = back_id;
			}
			else if(front_match_id == back_id)
			{
				right_surface_id = bottom_id;
			}
			else if(front_match_id == bottom_id)
			{
				right_surface_id = front_id;
			}
			else if(front_match_id == front_id)
			{
				right_surface_id = top_id;
			}
		}
		else if(top_match_id == bottom_id)
		{
			if(front_match_id == front_id)
			{
				right_surface_id = left_id;
			}
			else if(front_match_id == left_id)
			{
				right_surface_id = back_id;
			}
			else if(front_match_id == back_id)
			{
				right_surface_id = right_id;
			}
			else if(front_match_id == right_id)
			{
				right_surface_id = front_id;
			}
		}
		cout << S[right_surface_id] << endl;
	}
};

int main(void)
{
	int q;		//質問の数
	Dice dice;

	//質問の数を入力
	cin >> q;

	//q行分，質問と回答を実施
	for(int i = 0; i < q; i++)
	{
		int top_val;	//サイコロ上面の数
		int front_val;	//サイコロ前面の数

		cin >> top_val >> front_val;
		dice.AnswerSurface(top_val, front_val);
	}

	return 0;
}

