#include <iostream>
#include <string>


using namespace std;


class Dice{
	private:
		int dice_bk[6];

	public:
		// コンストラクタ
		Dice();
		// サイコロころころシュミレート
		int corocoro();
};


// コンストラクタ
Dice::Dice()
{
	for(int i = 0; i < 6; i++)
		cin >> dice_bk[i];
}
// サイコロころころシュミレート
int Dice::corocoro()
{
	int dice[6];
	int top, front;
	int mem, tmp;

	// 初期のダイスの状態をロード
	for(int i = 0; i < 6; i++)
		dice[i] = dice_bk[i];

	// 上面、正面の入力
	cin >> top >> front;
	for(int i = 0; i < 6; i++){
		if(front == dice[i]){
			mem = i;
			break;
		}
	}

	// test[0]にfrontを持ってくる
	string code;
	switch(mem){
		case 4:
			code = "S";
			break;
		case 1:
			code = "N";
			break;
		case 3:
			code = "E";
			break;
		case 2:
			code = "W";
			break;
		case 5:
			code = "WW";
			break;
		default:
			code = "";
			break;
	}

	for(int i = 0; i < code.length(); i++){
		switch(code[i]){
			case 'N':
				tmp = dice[5];
				dice[5] = dice[4];
				dice[4] = dice[0];
				dice[0] = dice[1];
				dice[1] = tmp;
				break;
			case 'S':
				tmp = dice[5];
				dice[5] = dice[1];
				dice[1] = dice[0];
				dice[0] = dice[4];
				dice[4] = tmp;
				break;
			case 'W':
				tmp = dice[5];
				dice[5] = dice[3];
				dice[3] = dice[0];
				dice[0] = dice[2];
				dice[2] = tmp;
				break;
			case 'E':
				tmp = dice[5];
				dice[5] = dice[2];
				dice[2] = dice[0];
				dice[0] = dice[3];
				dice[3] = tmp;
				break;
		}
	}

	// 正面を固定してサイコロをくるくる回す
	while(dice[4] != top){
		tmp = dice[4];
		dice[4] = dice[2];
		dice[2] = dice[1];
		dice[1] = dice[3];
		dice[3] = tmp;
	}

	// 右側の面を返す
	return dice[2];
}


int main()
{
	Dice *x = new Dice();
	int n;

	cin >> n;
	for(int i = 0; i < n; i++)
		cout << x->corocoro() << endl;

	return 0;
}
