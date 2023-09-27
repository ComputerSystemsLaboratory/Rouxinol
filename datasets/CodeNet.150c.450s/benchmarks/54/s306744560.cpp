#include <iostream>

using namespace std;

const int dif = 'A' - 'a';

int main(){
	int count = 0;
	string w, str;
	getline(cin, w);
	for(int i = 0; i < static_cast<int>(w.size()); i++){
		if('A' <= w[i] && w[i] <= 'Z'){
			w[i] -= dif;
		}
	}

	for(;;){
		cin >> str;
		if(str == "END_OF_TEXT") break;
		for(int i = 0; i < static_cast<int>(str.size()); i++){
			if('A' <= str[i] && str[i] <= 'Z'){
				str[i] -= dif;
			}
		}
		if(str == w) count++;
	}

	cout << count << endl;

	return 0;
}