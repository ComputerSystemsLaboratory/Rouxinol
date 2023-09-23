#include<iostream>
using namespace std;
int main() {
	int x, y;
	int d;
	long long cou = 0;
	while (cin >> d){
		cou = 0;
		for (int i = 0; i < 600/d; i++){
			x = i*d;
			y = x*x;
			cou += y*d;
		}
		cout << cou << endl;
	}
}