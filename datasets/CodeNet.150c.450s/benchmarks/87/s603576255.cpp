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

		int paz[n][5];

		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<5 ; j++){
				cin >> paz[i][j];
			}
		}

		/*
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<5 ; j++){
				cout << paz[i][j];
			}
			cout << endl;
		}
		*/


		int end_flag = 0;
		int score = 0;

		while(1){
			if(end_flag == 1) break;


			//????????¨??????????????????
			int combo;
			end_flag = 1;
			for(int i=0 ; i<n ; i++){

				combo = 0;

				if(paz[i][0] != 0 && paz[i][0] == paz[i][1] && paz[i][1] == paz[i][2]){
					combo = 1;
					end_flag = 0;
				}else if(paz[i][1] != 0 && paz[i][1] == paz[i][2] && paz[i][2] == paz[i][3]){
					combo = 2;
					end_flag = 0;
				}else if(paz[i][2] != 0 && paz[i][2] == paz[i][3] && paz[i][3] == paz[i][4]){
					combo = 3;
					end_flag = 0;
				}



				//cout << combo << endl;

				if(combo == 1){
					if(paz[i][0] == paz[i][3] && paz[i][0] == paz[i][4]){
						for(int j=0 ; j<5 ; j++){
							score += paz[i][j];
							paz[i][j] = 0;
						}
					}else if(paz[i][0] == paz[i][3]){
						for(int j=0 ; j<4 ; j++){
							score += paz[i][j];
							paz[i][j] = 0;
						}
					}else{
						for(int j=0 ; j<3 ; j++){
							score += paz[i][j];
							paz[i][j] = 0;
						}
					}
				}else if(combo == 2){
					if(paz[i][1] == paz[i][4]){
						for(int j=1 ; j<5 ; j++){
							score += paz[i][j];
							paz[i][j] = 0;
						}
					}else{
						for(int j=1; j<4 ; j++){
							score += paz[i][j];
							paz[i][j] = 0;
						}
					}
				}else if(combo == 3){
					for(int j=2 ; j<5 ; j++){
						score += paz[i][j];
						paz[i][j]=0;
					}
				}

			}

			//????????¨????????°????¨????????????????0???????????¨????????????????????????
			/*
			for(int i=0 ; i<n ; i++){
				for(int j=0 ; j<5 ; j++){
					cout << paz[i][j];
				}
				cout << endl;
			}
			cout << endl;
			*/

			for(int k=0 ; k<n ; k++){
				for(int i=1 ; i<n ; i++){
					for(int j=0 ; j<5 ; j++){
						if(paz[i][j] == 0){
							paz[i][j] = paz[i-1][j];
							paz[i-1][j] = 0;
						}
					}
				}
			}


			/*
			for(int i=0 ; i<n ; i++){
				for(int j=0 ; j<5 ; j++){
					cout << paz[i][j];
				}
				cout << endl;
			}
			*/

		}

		cout << score << endl;

	}
	return 0;
}