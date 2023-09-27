#include <iostream>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <algorithm>
#include <stdlib.h>
#include <vector>
#include <stack>

using namespace std;


int main(){
	int n;
	while(1){
		cin >> n;
		if(n==0) break;

		int S[2*n+1][2*n+1];
		for(int i=0 ; i<2*n+1 ; i++){
			for(int j=0 ; j<2*n+1 ; j++){
				S[i][j] = 999;
			}
		}

		int num , code;
		S[n][n] = 0;
		for(int i=1 ; i<n ; i++){
			cin >> num;
			cin >> code;

			int y, x;
			//???????????£?????¢?????¢?´¢
			for(int j=0 ; j<2*n+1 ; j++){
				for(int k=0 ; k<2*n+1 ; k++){
					if(S[j][k] == num){
						x = k;
						y = j;
					}
				}
			}

			if(code == 0) S[y][x-1] = i;
			if(code == 1) S[y+1][x] = i;
			if(code == 2) S[y][x+1] = i;
			if(code == 3) S[y-1][x] = i; 
		}

		
		/*
		for(int i=0 ; i<2*n+1 ; i++){
			for(int j=0 ; j<2*n+1 ; j++){
				cout << S[i][j];
			}
			cout << endl;
		}
		*/
		

		int ws, we;
		int hs, he;

		int flag=0;
		for(int i=0 ; i<2*n+1 ; i++){
			for(int j=0 ; j<2*n+1 ; j++){
				if(S[j][i] != 999){
					ws = i;
					flag = 1;
					break;
				}
				if(flag==1) break;
			}
		}

		flag=0;
		for(int i=2*n ; i>0 ; i--){
			for(int j=0 ; j<2*n+1 ; j++){
				if(S[j][i] != 999){
					we = i;
					flag = 1;
					break;
				}
				if(flag==1) break;
			}
		}
		cout << we-ws+1 << ' ';
		

		flag = 0;
		for(int i=0 ; i<2*n+1 ; i++){
			for(int j=0 ; j<2*n+1 ; j++){
				if(S[i][j] != 999){
					hs = i;
					flag = 1;
					break;
				}
			}
			if(flag == 1) break;
		}

		flag = 0;
		for(int i=2*n ; i>0 ; i--){
			for(int j=0 ; j<2*n+1 ; j++){
				if(S[i][j] != 999){
					he = i;
					flag = 1;
					break;
				}
			}
			if(flag == 1) break;
		}

		cout << he-hs+1 << endl;


	}
	return 0;
}