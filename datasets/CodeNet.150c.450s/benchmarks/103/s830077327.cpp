#include<iostream>

int n, s;

int comb(int i, int sum, int c){
	if (i == 10){
		if (sum == s && c == n)return 1;
		else return 0;
	}

	return comb(i + 1, sum + i, c + 1) + comb(i + 1, sum, c);
}

int main(){
	while (std::cin >> n >> s, n || s){
		std::cout << comb(0, 0, 0) << std::endl;
	}
	return 0;
}