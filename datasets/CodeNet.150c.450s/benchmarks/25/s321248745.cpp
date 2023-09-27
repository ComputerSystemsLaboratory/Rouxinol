#include <iostream>
#include <string>
using namespace std;

int main(){
	int alph[26] = {};
	string inp, inpline;
	do{
		getline(cin, inpline);
		inp += inpline;
	}while(inpline != "\0");
	cout << inpline;
	for (unsigned int i = 0; i < inp.length(); i++){
		if (inp[i] >= 'a' && inp[i] <= 'z'){
			alph[inp[i] - 'a']++;
		}
		if (inp[i] >= 'A' && inp[i] <= 'Z'){
			alph[inp[i] - 'A']++;
		}
	}
	for (int i = 0; i < 26; i++){
		cout << (char)('a' + i) << " : " << alph[i] << endl;
	}
}