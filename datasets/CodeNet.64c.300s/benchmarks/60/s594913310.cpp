#include<iostream>

#define S 16
int num[S+1][S+1];
int a, b;
int n;

void print(){
	int i, j;
	for( j = 1; j <= b; j++ ){
		for( i = 1; i <= a; i++ ){
			std::cout << num[i][j] << " ";
		}
		std::cout << std::endl;
	}
	return;
}

void init(){
	int i, j;
	for( i = 1; i <= S; i++ ){
		for( j = 1; j <= S; j++ ){
			num[i][j] = -1;
		}
	}
	num[1][1] = 1;
	return;
}

int input(){
	int i, x, y;
	init();
	std::cin >> a >> b;
	if( a == 0 || b == 0 ){ return 0; }
	std::cin >> n;
	for( i = 0; i < n; i++ ){
		std::cin >> x >> y;
		num[x][y] = 0;
	}
	return (a+b);
}

int get(int i, int j){
	if( num[i][j] >= 0 ){ return num[i][j]; }
	if( i == 0 || j == 0 ){ return (num[i][j] = 0); }
	num[i][j] = get(i-1, j) + get(i, j-1);
	return num[i][j];
}

int main(){
	while( input() > 0 ){ std::cout << get(a, b) << std::endl; }
	return 0;
}