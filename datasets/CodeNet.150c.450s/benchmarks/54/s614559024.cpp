#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <stdio.h>
#include <sstream>


using namespace std;
void swap(int &a, int &b);

int main()
{
	// 探索する文字列
	string sAnswer;
	getline(cin, sAnswer);

	string sstr;// = {};
	
	int count = 0;

	//getline(cin, sstr);
	while (true)
	{
		cin >> sstr;
		if (sstr == "END_OF_TEXT")
			break;
		// 大文字を小文字に変換
		for (int i = 0; i < sstr.size(); ++i)
		{
			if (isupper(sstr[i]))
				sstr[i] = tolower(sstr[i]);
		}
		if (sstr == sAnswer)
			count++;

	}
	cout << count << endl;


	return 0;
}



