#include <iostream>
#include <stdio.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <vector>

using namespace std;
int main(){
	int N;
	while(1){
		cin >> N;
		if(N == 0) break;
		int i,j;
		int n, d;
		int h = 0, w = 0, w1 = 0;
		if(N == 1){
			cout << "1 " << "1" << endl; 
			continue;
		}
		else{
			int a[2*N + 1][2*N + 1];
			for(i = 0;i < 2*N+1;i++){
				for(j = 0;j < 2*N+1;j++){
					a[i][j] = 999;
					//cout << a[i][j];
				}
				//cout << endl;
			}
			a[N][N] = 0;
			int count = 1;
			for(int k = 0;k < N-1;k++){
				cin >> n >> d;
				//cout << endl;
				
				for(i = 0;i < 2*N+1;i++){
					for(j = 0;j < 2*N+1;j++){
						if(a[i][j] == n){
							if(d == 0){
								a[i][j-1] = count;
								count++;
							}
							if(d == 1){
								a[i+1][j] = count;
								count++;
							}
							if(d == 2){
								a[i][j+1] = count;
								count++;
							}
							if(d == 3){
								a[i-1][j] = count;
								count++;
							}
						}
						//cout << a[i][j];
					}
					//cout << endl;
				}
				//cout << endl;
			}
			/*for(i = 0;i < 2*N+1;i++){
				for(j = 0;j < 2*N+1;j++){
					cout << a[i][j];
				}
				cout << endl;
			}
			cout << endl;*/
			bool hantei = false;
			for(i = 0;i < 2*N+1;i++){
				for(j = 0;j < 2*N+1;j++){
					if(a[j][i] != 999){
						w = i;
						hantei = true;
						break;
					}	
				}
				if(hantei) break;
				//cout << "w = " << w << endl;
			}
			hantei = false;
			for(i = 2*N;i >= 0;i--){
				for(j = 0;j < 2*N+1;j++){
					if(a[j][i] != 999){
						w1 = i;
						hantei = true;
						break;
					}
				}
				if(hantei) break;
			}
			for(i = 0;i < 2*N+1;i++){
				for(j = 0;j < 2*N+1;j++){
					if(a[i][j] != 999){
						h++;
						break;
					}
				}
			}	
		}
		cout << w1-w+1 << " " << h << endl;
	}
	return 0;
}