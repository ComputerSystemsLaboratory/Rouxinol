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

string word;	//見つけたい文字列
string str;		//文章中の単語

int main()
{
	int cnt=0;
	cin >> word;
	while (1)
	{
		cin >> str;
		if (str == "END_OF_TEXT") break;
		transform(str.begin(), str.end(), str.begin(), ::tolower);
		if (str == word) cnt++;
	}
	cout << cnt << endl;
	return 0;
}