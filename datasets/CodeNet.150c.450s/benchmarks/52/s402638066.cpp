#include <iostream>
using namespace std;

int main(){
	int a[100], i = 0;
	while (true){
		cin >> a[i];
		if (cin.eof()) { break; }
		if (a[i] == 0 ){
			cout << a[i - 1] << endl;
			i--;
		}
		else { i++; }
	}
	return 0;
}