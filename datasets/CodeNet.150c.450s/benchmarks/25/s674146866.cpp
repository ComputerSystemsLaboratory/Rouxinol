#include <iostream>
using namespace std;

int main(){
	char ch;
	int count[26] = { 0 };
	while (cin >> ch){
		int num = -1;

		if (ch >= 'a'&&ch <= 'z'){
			num = ch - 'a';
			count[num]++;
		}
		if (ch >= 'A'&&ch <= 'Z'){
			num = ch - 'A';
			count[num]++;
		}
	}
	for (int i = 0; i < 26; i++){
		cout << (char)('a' + i) << " : " << count[i] << endl;
	}
	return 0;
}