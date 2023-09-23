#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

int get_digit(int num);

int main(){

	while (1){
		int a, b;
		cin >> a >> b;
		if (cin.eof()){
			break;
		}
		cout << get_digit(a + b) << endl;
	}

	return 0;
}

int get_digit(int num){

	if (num / 10 != 0){
		return 1 + get_digit(num / 10);
	}
	return 1;
}