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

	int n, m;

	while(1){
		cin >> n;
		cin >> m;

		if(n==0 && m==0) break;

		int taro[n];
		int taro_s=0;
		int hana[m];
		int hana_s=0;

		for(int i=0 ; i<n ; i++){
			cin >> taro[i];
			taro_s += taro[i];
		}
		for(int i=0 ; i<m ; i++){
			cin >> hana[i];
			hana_s += hana[i];
		}

		sort(taro, taro+n);
		sort(hana, hana+m);
		int flag = 0;

		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<m ; j++){
				if((taro_s-taro[i]+hana[j]) == (hana_s-hana[j]+taro[i])){
					cout << taro[i] << ' ' << hana[j] << endl;
					flag = 1;
					break;
				}
			}
			if(flag==1) break;
		}

		if(flag==0) cout << -1 << endl;
	}
	return 0;
}