#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
	int N;
	cin >> N;
	while(N != 0){
		int Y, M, D;
		cin >> Y >> M >> D;
		int sum = 0;
		for(int i = Y;i < 1000;i++){
			if(i%3 == 0){
				for(int j = M;j <=10;j++){
					for(int k = D;k <= 20;k++){
						sum++;
					}
					D = 1;
				}
				M = 1;
			}
			else{
				for(int j = M;j <= 10;j++){
					if(j%2 == 1){
						for(int k = D;k <= 20;k++){
							sum++;
						}
						D = 1;
					}
					else if(j%2 == 0){
						for(int k = D;k <= 19;k++){
							sum++;
						}
						D = 1;
					}
				}
				M = 1;
			}	
		}
		cout << sum << endl;
		N--;
	}

	return 0;
}