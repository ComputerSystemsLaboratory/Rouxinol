#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
#include <vector>
#include <queue>
#include <map>
using namespace std;

int main() {
	
	while(true){
		int H;
		cin >> H;
		
		if(H == 0){
			break;
		}
		
		int ss = 0;
		int a[20][20] = {};
		
		for(int i = H - 1; i >= 0; i--){
			for(int j = 1; j <= 5; j++){
				cin >> a[i][j];
				ss += a[i][j];
			}
		}
		
		while(true){
			
			bool is_ext = false;
			bool ext[20][20] = {};
			
			for(int i = 0; i < H; i++){
				for(int j = 1; j <= 5; j++){
					if(a[i][j - 1] == a[i][j] && a[i][j] == a[i][j + 1] && a[i][j] > 0){
						ext[i][j - 1] = true;
						ext[i][j] = true;
						ext[i][j + 1] = true;
						is_ext = true;
						//cout << i << " " << j << endl;
					}
				}
			}
			if(!is_ext){
				break;
			}
			
			for(int i = 0; i < H; i++){
				for(int j = 1; j <= 5; j++){
					if(ext[i][j]){
						a[i][j] = -1;
					}
				}
			}
			
			/*
			for(int i = H - 1; i >= 0; i--){
				for(int j = 1; j <= 5; j++){
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			*/
			
			for(int loop = 0; loop <= H; loop++){
				for(int i = 0; i < H; i++){
					for(int j = 1; j <= 5; j++){
						if(a[i][j] == -1){
							a[i][j] = a[i + 1][j];
							a[i + 1][j] = -1;
						}
					}
				}
			}
			
			/*
			for(int i = H - 1; i >= 0; i--){
				for(int j = 1; j <= 5; j++){
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
			cout << endl;
			*/
		}
		
		int rem = 0;
		
		for(int i = H - 1; i >= 0; i--){
			for(int j = 1; j <= 5; j++){
				//cout << a[i][j] << " ";
				if(a[i][j] > 0){
					rem += a[i][j];
				}
			}
			//cout << endl;
		}
		
		cout << ss - rem << endl;
		
	}
	return 0;
}


