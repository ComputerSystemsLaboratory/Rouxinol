#include<iostream>

long long int a[31];

int main(){
	int n;
	a[0] = 1, a[1] = 1, a[2] = 2;
	for (int i = 3; i <= 30; ++i){
		a[i] = a[i - 1] + a[i - 2] + a[i - 3];
	}
	while (std::cin >> n ,n){
		
		std::cout << (a[n]/3650)+1 << std::endl;
	}
}