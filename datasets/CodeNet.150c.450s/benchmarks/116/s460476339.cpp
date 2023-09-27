#include<iostream>
#include<limits.h>

#define N 100000
int n, k;
int a[N];

int input(){
	int i;
	std::cin >> n >> k;
	for( i = 0; i < n; i++ ){ std::cin >> a[i]; }
	return n;
}

int func(){
	int sum = 0, m = 0, i;
	for( i = 0; i < k; i++ ){ sum += a[i]; }
	m = sum;
	for( i = k; i < n; i++ ){
		sum += a[i] - a[i-k];
		m = (sum>m?sum:m);
	}
	return m;
}

int main(){
	while( input() > 0 ){ std::cout << func() << std::endl; }
	return 0;
}