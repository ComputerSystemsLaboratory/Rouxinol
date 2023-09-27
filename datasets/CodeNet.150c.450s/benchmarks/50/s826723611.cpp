#include <iostream>
#include <fstream>
using namespace std;

int main() {

	//ifstream cin("INPUT.txt");
	//ofstream cout("OUTPUT.txt");

	int s, o;
	while(cin >> s, s) {
		s = 1000 - s;
		o = 0;
		while(s >= 500) {
			s -= 500;
			o++;
		}
		while(s >= 100){
			s -= 100;
			o++;
		}
		while(s >= 50){
			s -= 50;
			o++;
		}
		while(s >= 10){
			s -= 10;
			o++;
		}
		while(s >= 5){
			s -= 5;
			o++;
		}
		o += s;
		cout << o << endl;
	}

	return 0;

}