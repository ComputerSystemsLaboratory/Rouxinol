#include<iostream>

const int coins[] = {500, 100, 50, 10, 5, 1};
//int nums[] = {0, 0, 0, 0, 0, 0};

int run(){
	int x, x2, num = 0, t;
	int M = sizeof(coins) / sizeof(int);
	std::cin >> x;
	if( x == 0 ){ return 0; }
	x2 = 1000 - x;
	for( int i = 0; i < M; i++ ){
		t = x2 / coins[i];
		x2 -= t * coins[i];
		num += t;
	}
	std::cout << num << std::endl;
	return 1;
}

int main(){
	while( run() );
	return 0;
}