#include<iostream>
using namespace std;

int GCD(int x, int y){
	int gcd = 1;
	int i = 2;
	while(1){
		if(x % i == 0 && y % i == 0){
			x = x / i;
			y = y / i;
			gcd *= i;
			i = 2;
		}else{
			i++;
		}
		if(i > x || i > y) break;
	}
	return gcd;
}

int main(){
	int x, y;
	cin >> x >> y;
	cout << GCD(x, y) << endl;
	return 0;
}