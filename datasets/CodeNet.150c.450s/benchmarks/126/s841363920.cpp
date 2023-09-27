#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

bool map[20][20];

long long int num[20][20];

int main(){
	int a, b, n;
	while(true){
		cin >> a >> b;
		if(a == 0 && b == 0){
			break;
		}
		cin >> n;
		int x, y;
		for(int i = 0; i < 20; i++){
			for(int j = 0; j < 20; j++){
				map[i][j] = false;
			}
		}
		for(int i = 0; i < n; i++){
			cin >> x >> y;
			map[x][y] = true;
		}
		if(map[1][1]){
			num[1][1] = 0;
		}else{
			num[1][1] = 1;
		}
		for(int i = 2; i <= a; i++){
			if(map[i][1]){
				num[i][1] = 0;
			}else{
				num[i][1] = num[i - 1][1];
			}
		}
		for(int i = 2; i <= b; i++){
			if(map[1][i]){
				num[1][i] = 0;
			}else{
				num[1][i] = num[1][i - 1];
			}
		}
		for(int i = 2; i <= a; i++){
			for(int j = 2; j <= b; j++){
				if(map[i][j]){
					num[i][j] = 0;
				}else{
					num[i][j] = num[i - 1][j] + num[i][j - 1];
				}
			}
		}
		
		printf("%lld\n", num[a][b]);
	}
	return 0;
}