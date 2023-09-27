#include<iostream>
#include<string>

#define R input[0][1]

using namespace std;

int input() {
	int input[51][2];
	cin >> input[0][0] >> input[0][1];								//まずnとr
	if (input[0][0] == 0 && input[0][1] == 0) {
		return 0;
	}
	for (char pos = 1; pos <= input[0][1]; pos++) {					//r回のシャッフルの仕方を入力
		cin >> input[pos][0] >> input[pos][1];
	}																//ここまで入力

	/*シャッフルもどし*/
	int whtop = 1;													//最後一番上にいるカードは、今何番目にいる？
	if (R==0)return input[0][0];									//一回もシャッフルしないならコレ

	whtop = input[input[0][1]][0];									//一回目のもどしだけ別枠
	R--;
	while (input[0][1] != 0) {	
		if (whtop <= input[R][1]) whtop = whtop + input[R][0] - 1;
		else if ((input[R][0] + input[R][1] - 1) < whtop) whtop = whtop;
		else whtop = whtop - input[R][1];
		R--;
	}
	return input[0][0] - whtop + 1;

}


int main()
{
	while (1) {
		int check;
		check = input();
		if (check == 0)break;
		else {
			cout << check << endl;
		}
	}
}
