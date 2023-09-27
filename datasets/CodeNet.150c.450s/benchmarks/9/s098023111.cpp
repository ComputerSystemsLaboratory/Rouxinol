#include <iostream>
#include <cstdio>
#include <cmath>
#include <cctype>
#include <cstdlib>
#include <algorithm>
#include <string>
#include <iomanip>

using namespace std;

#define pi 3.141592653589
#define repeat(i,n) for(int i=0;i<n;i++)

int main()
{
	string str;	//最初の文字列
	string temp;	//シャッフルの時に使う文字列操作用変数
	int n;	//シャッフル回数
	int h;	//シャッフル枚数
	while (1)
	{
		cin >> str;
		if (str == "-") break;
		cin >> n;
		repeat(i, n)
		{
			cin >> h;
			temp = str.substr(0, h);
			str = str + temp;
			str.erase(0, h);
		}
		cout << str << endl;
	}
	return 0;
}