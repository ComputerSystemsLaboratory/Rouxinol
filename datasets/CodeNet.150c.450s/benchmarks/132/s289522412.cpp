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

	int n, p;

	while(1){
		cin >> n;
		cin >> p;
		if(n ==0 && p==0) break;

		int sum[n];
		int win=p;
		int winner;
		int flag = 0;

		for(int i=0 ; i<n ; i++){
			sum[i] = 0;
		}

		while(1){
			for(int i=0 ; i<n ; i++){
				if(p>0){
					sum[i]++;
					p--;
					if(sum[i]==win){
						flag = 1;
						winner = i;
						break;
					}
				}else{
					p = sum[i];
					sum[i] = 0;
				}
			}

			if(flag == 1) break;
		}

		cout << winner << endl;
	}
	return 0;
}