#include<iostream>
using namespace std;


int main()
{
	int count[26] = { 0 };
	char ch;
	while (cin >> ch){
		if ('a' <= ch && ch <= 'z'){
			count[ch - 'a']++;
		}
		else if ('A' <= ch && ch <= 'Z'){
			count[ch - 'A']++;
		}
	}
	for (int i = 0; i < 26; i++){
		cout << char('a' + i) << " : " << count[i] << endl;
	}

	return 0;
}