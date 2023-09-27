#include<iostream>
#include<string>
using namespace std;

int checkstring(string W, string T)
{
	//同じか調べる
	int Wsize = W.size();

	if (Wsize != T.size()) {//同じ文字数か
		return 0;
	}

	for (int i = 0; i < Wsize; i++) {
		if (W[i] == T[i] || W[i] == T[i] + ' ') {//小文字か大文字が同じではない
			if (i + 1 == Wsize) {
				return 1;
			}
		}
		else {
			return 0;
		}
	}

}

int main()
{
	string W, T;
	cin >> W;//単語
	
	int count = 0;

	while (cin >> T) {
		if (T == "END_OF_TEXT") {//終了
			break;
		}
		//同じ文字かどうか
		count += checkstring(W, T);
	}

	cout << count << endl;

	return 0;
}
