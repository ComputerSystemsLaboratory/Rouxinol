#include<iostream>
using namespace std;
int main() {
	unsigned short int l[30] = { 0 };
	for (int i = 0; i < 28; i++){
		int a;
		cin >> a;
		l[a - 1] = 1;
	}
	for (int i = 0; i < 30; i++){
		if (l[i] == 0){
			cout << i + 1 << endl;
		}
	}
	char c;
	cin >> c;
}