#include <iostream>

using namespace std;

int main(){
	int n; int i; int money = 100000;
	cin >> n;
	for (i = 1; i <= n; i++){
		money = money * 1.05;
		int hasuu = money % 1000;
		if (hasuu > 0){
			money = money - hasuu + 1000;
		}
	}
	cout << money << endl;

	return  0;
}