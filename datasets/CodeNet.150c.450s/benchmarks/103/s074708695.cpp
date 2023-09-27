#include <iostream>

int n, s;
//int num[10]={0,1,2,3,4,5,6,7,8,9};

int func(int de, int k, int sum){
	int res = 0;
	if(de == n){
		if(sum == s)return 1;
		return 0;
	}
	//if(sum > s || > n)return 0;
	for(int i = k; i < 10 && sum+i<=s; ++i){
		
		res += func(de + 1, i + 1, sum + i);
		//res += func(de, i + 1, sum);
	}
	return res;
}

int main(){
	while(std::cin >> n >> s, n + s){
		std::cout << func(0, 0, 0) << std::endl;
	}
	return 0;
}