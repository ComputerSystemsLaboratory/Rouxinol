#include<iostream>

int res = 0;
//least_n: 選べる最小のn
void rec(int n, int s, int least_n){
	if(n == 1 && least_n <= s && s < 10){
		res++;
	}
	for(int i=least_n;i<10;i++){
		rec(n-1, s-i, i+1);
	}
}

int main(){
	int n, s;
	while(std::cin >> n >> s, n){
		res = 0;
		rec(n, s, 0);
		std::cout << res << std::endl;
	}
}