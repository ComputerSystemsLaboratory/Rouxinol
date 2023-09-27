#include <iostream>
#include <cctype>

using namespace std;

int main(){
	int alphabet[26] = {};
	char ch;

	while(cin >> ch){
		if(isalpha(ch)){
			int n = tolower(ch) - 'a';
			alphabet[n]++;
		}
	}

	for(int i = 0; i < 26; i++){
		cout << static_cast<char>('a' + i) << " : " << alphabet[i] << endl;
	}
	return 0;
}