#include<iostream>
#include <string>
using namespace std;

int main()
{
	string  word; //string型直接代入できる
	char change[1200] = { 0 };

	getline(cin, word);//空白が入ってても1行分読み込める

	for (int i = 0; i < word.length(); i++)
	{
		if (word[i] >= 'A' && word[i] <= 'Z') change[i] = word[i] + 32;
		else if (word[i] >= 'a' && word[i] <= 'z') change[i] = word[i] - 32;
		else change[i] = word[i];
		cout << change[i];
	}
	cout << "\n";
	return 0;
}
