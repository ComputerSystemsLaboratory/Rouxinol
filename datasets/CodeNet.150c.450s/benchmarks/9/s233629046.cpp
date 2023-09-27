#include <iostream>
#include <string>

using namespace std;

int main(void)
{
	//カードの山
	string cards;

	//シャッフル回数
	int shuffle_num;

	//下から取り出すカードの枚数
	int h;

	while(1)
	{
		//カードの山を入力
		cin >> cards;

		if(cards == "-") break;

		//シャッフル回数を入力
		cin >> shuffle_num;

		for(int i = 0; i < shuffle_num; i++)
		{
			//取り出すカードの枚数を入力
			cin >> h;

			string tmp;

			//先頭から取り出すカードの文字列を取得
			tmp = cards.substr(0, h);

			//取り出したカードは先頭から削除
			cards.erase(0, h);

			//先頭から取り出したカードの文字列を末尾に加える
			cards = cards + tmp;
		}

		cout << cards << endl;
		cards = "";
	}
	return 0;
}

