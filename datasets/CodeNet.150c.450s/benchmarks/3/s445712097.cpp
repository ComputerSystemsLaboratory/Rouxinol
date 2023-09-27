#include <iostream>
#include <string>

using namespace std;

//strのa文字目からb文字目までを出力する
void print(string str, int a, int b)
{
	for(int i = a; i <= b; i++)
	{
		cout << str[i];
	}
	cout << endl;
}

//strのa文字目からb文字目までを逆順にする
void reverse(string& str, int a, int b)
{
	for(int i = 0; i < (b-a+1)/2; i++)
	{
		char tmp = str[a+i];
		str[a+i] = str[b-i];
		str[b-i] = tmp;
	}
}

//strのa文字目からb文字目までをpに置き換える
void replace(string& str, int a, int b, string p)
{
	str.replace(a, b-a+1, p);
}

int main(void)
{
	string str;	//入力文字列
	string op;	//命令
	string replace_str;	//置き換え文字列

	int op_num;	//命令数
	int a, b;	//対象範囲
	
	//操作する文字列を入力
	cin >> str;

	//命令数を入力
	cin >> op_num;

	for(int i = 0; i < op_num; i++)
	{
		//命令を入力
		cin >> op;
		if(op == "print")		//print命令の場合
		{
			cin >> a >> b;
			print(str, a, b);
		}
		else if(op == "reverse")	//reverse命令の場合
		{
			cin >> a >> b;
			reverse(str, a, b);
		}
		else if(op == "replace")	//replace命令の場合
		{
			cin >> a >> b >> replace_str;
			replace(str, a, b, replace_str);
		}
	}

	return 0;
}

