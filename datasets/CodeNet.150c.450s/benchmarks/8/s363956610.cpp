#include <iostream>
#include <string>
using namespace std;

int main(){
	int turn, scrt, scrh;
	string st, sh;
	scrt = scrh = 0;
	cin >> turn;
	for(int i = 0; i < turn; i++){
		cin >> st >> sh;
		if(st > sh){
			scrt += 3;
		}
		else if(st < sh){
			scrh += 3;
		}
		else if(st == sh){
			scrt++;
			scrh++;
		}
	}
	cout << scrt << " " << scrh << endl;
	return 0;
}
