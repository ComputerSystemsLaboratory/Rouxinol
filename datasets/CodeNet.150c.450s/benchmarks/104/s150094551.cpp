#include<iostream>
#include<algorithm>
#include<stdio.h>

#define MAX 30
#define rep(i, a) for(int i = 0; i < (a); ++i)
#define rept(i, a, b) for(int i = (a); i <= (b); ++i)

int main(){
	int w, n;
	int num[MAX];
	int a, b;
	std::cin >> w >> n;
	rep(i, MAX)
		num[i] = i + 1;		
	rep(i, n){
		scanf("%d,%d", &a, &b);
		std::swap(num[a - 1], num[b - 1]);
	}
	rep(i, w)
		std::cout << num[i] << std::endl;
	return 0;
}