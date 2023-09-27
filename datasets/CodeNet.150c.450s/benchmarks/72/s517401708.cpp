#include <iostream>
#include <string.h>

using namespace std;

#define DIFF_ASCII  0x20		// ASCIIの差分

int main()
{
	string inputStr;
	int strLength = 0;
	
	// 文字列の入力と文字列長の計算
	getline(cin, inputStr);
	strLength = inputStr.size();
	
	// 大文字小文字の変換
	// ASCIIでの大文字小文字は、大文字の方が小さい
	for(int i = 0; i < strLength; i++)
	{
		// 大文字から小文字
		if( ('A' <= inputStr[i]) && ('Z' >= inputStr[i]) )
		{
			inputStr[i] += DIFF_ASCII;
		}
		// 小文字から大文字
		else if( ('a' <= inputStr[i]) && ('z' >= inputStr[i]) )
		{
			inputStr[i] -= DIFF_ASCII;
		}
		// それ以外
		else
		{
			// 何もしない
		}
	}
	
	cout << inputStr << endl;
	
	return 0;
}
