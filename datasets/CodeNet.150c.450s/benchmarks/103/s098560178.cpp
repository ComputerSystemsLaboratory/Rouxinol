#include <iostream>
#include <cstdio>

int search(int i, int left, int count){
	if(i == 10){
		return left == 0 && count == 0;
	}
	return search(i + 1, left, count) + search(i + 1, left - i, count - 1);
}

int main(){
	int n, s;

	while(scanf("%d%d", &n, &s), n + s){
		std::cout << search(0, s, n) << std::endl;
	}

	return 0;
}