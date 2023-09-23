#include <iostream>
using namespace std;

int XX(int a, int d){
	return a * a * d;
}

int main(){
	int d;
	while (true){
		int sum = 0;
		cin >> d;
		if (cin.eof()) { break; }
		for (int i = 0;i<600/d;i++){
			sum += XX(i*d, d);
		}
		cout << sum << endl;
	}
	return 0;
}