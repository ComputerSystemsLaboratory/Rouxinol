#include <iostream>

using namespace std;

const int dif = 'A' - 'a';

int main(){
	string str;
	getline(cin, str);

	for(int i = 0; i < static_cast<int>(str.size()); i++){
		if('A' <= str[i] && str[i] <= 'Z'){
			str[i] -= dif;
		}else if('a' <= str[i] && str[i] <= 'z'){
			str[i] += dif;
		}
	}

	cout << str << endl;
}