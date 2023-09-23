#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool block[30][30];

long long int memo[30][30];

int sum(int x, int y){
	if(x == 0 || y == 0){
		return 0;
	}
	if(block[x][y]){
		return 0;
	}
	if(x == 1 && y == 1){
		return 1;
	}
	if(memo[x - 1][y] < 0){
		memo[x - 1][y] = sum(x - 1, y);
	}
	if(memo[x][y - 1] < 0){
		memo[x][y - 1] = sum(x, y - 1);
	}
	return memo[x - 1][y] + memo[x][y - 1];
}

int main(){
	int a, b, n;
	while(true){
		cin >> a >> b;
		if(a == 0){
			break;
		}
		for(int i = 0; i < 30; i++){
			for(int j = 0; j < 30; j++){
				block[i][j] = false;
				memo[i][j] = -1;
			}
		}
		cin >> n;
		for(int i = 0; i < n; i++){
			int num1, num2;
			cin >> num1 >> num2;
			block[num1][num2] = true;
		}
		cout << sum(a, b) << endl;
	}
	return 0;
}