#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int brack(int n){
	int x = 100000;
	int y = 0;
	for (int i = 0; i < n; i++){
		x *= 1.05;
		y = x % 1000;
		if (y != 0){
			x -= y;
			x += 1000;
		}
	}
	return x;
}


int main(){
	int n;
	cin >> n;
	cout << brack(n) << endl;

	return 0;
}
