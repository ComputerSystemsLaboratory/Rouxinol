#include<iostream>

int gcd(int x, int y){
	if (y == 0)return x;
	return gcd(y, x%y);
}

int main(){
	int a, b;
	while (std::cin >> a >> b){
		int tmp = gcd(a, b);
		std::cout << tmp << " " << a / tmp*b << std::endl;
	}
	return 0;
}