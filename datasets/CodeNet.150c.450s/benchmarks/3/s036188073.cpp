#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

void print(string str, int a, int b)
{
	//出力

	//aからb-aまでの文字を抽出
	cout << str.substr(a, b - a + 1) << endl;
}

string reverse(string str, int a, int b)
{
	//aからb文字目までを逆順
	string str2 = str.substr(a, b - a + 1);
	
	//逆順化
	reverse(str2.begin(), str2.end());
	
	str.replace(a, b - a + 1, str2);
	
	return str;
}

string replace(string str, int a, int b)
{
	string str2;
	cin >> str2;
	str.replace(a, b - a + 1, str2);
	return str;
}

int main()
{
	string str, comand;
	int a, b, q;

	//文字列と命令数
	cin >> str >> q;

	for (int i = 1; i <= q; i++) {
		cin >> comand;
		cin >> a >> b;
		if (comand == "print") {//出力
			print(str, a, b);
		}
		else if (comand == "reverse") {//逆順
			str = reverse(str, a, b);
		}
		else {//置き換え
			str = replace(str, a, b);
		}
	}


	return 0;
}
