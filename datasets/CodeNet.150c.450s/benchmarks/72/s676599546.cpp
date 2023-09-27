#include <iostream>
#include <string>
using namespace std;

int main(){
	string inp;
	getline(cin, inp);
	for (int i = 0; i < 1200; i++){
		if (inp[i] == '\0'){
			break;
		}
		if (inp[i] >= 'A' && inp[i] <= 'Z'){
			inp[i] = inp[i]+ 'a' - 'A' ;
		} else if (inp[i] >= 'a' && inp[i] <= 'z'){
				inp[i] = inp[i]+ 'A' - 'a' ;
			}
	}
	cout << inp << endl;
}