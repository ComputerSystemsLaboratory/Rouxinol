#include<iostream>
using namespace std;

int main(){
	int n, money = 100000;
	cin >> n;
	while (n--){
		money *= 1.05;
		if (money % 1000){ money = money / 1000 * 1000 + 1000; }
	}
	cout << money << endl;
	return 0;
}