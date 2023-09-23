#include<iostream>

int n, s;

int solve(int ind, int n, int s){
	if (ind == 10){
		if (n == 0 && s == 0)return 1;
		else return 0;
	}
	return solve(ind + 1, n - 1, s - ind) + solve(ind + 1, n, s);
}

int main(){
	while (std::cin >> n >> s , n){
		std::cout << solve(0,n,s) << std::endl;
	}

}