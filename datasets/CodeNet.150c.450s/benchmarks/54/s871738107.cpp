#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main(void){
	int count = 0;
	string str, W;

	cin >> W;
	
	while (true){
		cin >> str;

		if (str == "END_OF_TEXT") break;
		
		if (!isalpha(str[str.size() -1 ])) str.erase(str.size()-1);
		
		for (int i = 0; i < str.size(); i++){
			if (isupper(str[i]))str[i] = tolower(str[i]);
		}

		if (str == W) count++;
	}

	cout << count << "\n";

	return 0;
}