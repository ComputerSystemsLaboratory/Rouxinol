//#define _USE_MATH_DEFINES
#include <iostream>
//#include <stdio.h>
//#include <iomanip>
#include <vector>
//#include <string>
//#include <algorithm>
//#include <functional>
//#include <cmath>

using namespace std;

#define N_MAX 1000000

int kouho[N_MAX / 2];

int main(){

	vector <int> sosuu;
	int check;
	//int kouho[N_MAX / 2];
	int n;
	int cnt;

	for (int i = 0; i < N_MAX / 2; i++){
		kouho[i] = i * 2 + 1;
	}
	kouho[0] = 0;

	sosuu.push_back(2);
	check = 3;

	while (check < 1000){
		sosuu.push_back(check);
		for (int i = check/2; i < N_MAX / 2; i++){
			if ((kouho[i] % check) == 0){
				kouho[i] = 0;
			}
		}
		for (int i = check/2; i < N_MAX / 2; i++){
			if (kouho[i] != 0){
				check = kouho[i];
				break;
			}
		}
	}
	
	
	while (cin >> n){
		cnt = 0;
		if (n <= 1000){
			for (int i = 0; i < sosuu.size(); i++){
				if (sosuu[i] <= n)cnt++;
				else break;
			}
		}
		else{
			cnt += sosuu.size();
			for (int i = 0; i < N_MAX /2; i++){
				if (kouho[i] > n){
					break;
				}
				else{
					if (kouho[i] != 0)cnt++;
				}
			}
		}
		cout << cnt << endl;
	}

	

	return 0;
}