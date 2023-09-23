#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string>
#include<iostream>
#include<cctype>
#include<cstdio>
#include<vector>
#include<stack>
#include<queue>
#include <algorithm>
#include<math.h>
#include<set>
#include<map>
#include<iomanip>

//#include<bits/stdc++.h>


using namespace std;



int main() {
	while(1){
		int n; cin >> n;
		if (!n)break;
		int t[16][16] = {};
		for (int i = 0; i < 16; i++)
			for (int j = 0; j < 16; j++)
				if (i == j)continue;
				else t[i][j] = 9999999;
		bool f[15][15] = {};
		bool F[15] = {};
		for (int i = 0; i < n; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			t[a][b] = c;
			t[b][a] = c;
			
			F[a] = 1, F[b] = 1;
		}

		for (int i = 0; i < 10; i++) {
			for (int j = 0; j < 10; j++) {
				for (int k = 0; k < 10; k++) {
					t[j][k] = min(t[j][k], t[j][i] + t[i][k]);
				}
			}
		}

		int ans = 0, an = 9999999;
		for (int i = 0; i < 10; i++) {
			if (!F[i])continue;
			int dd = 0;
			for (int j = 0; j < 10; j++) {
				if (!F[j])continue;
				dd += t[i][j];
			}
			if (an > dd) {
				ans = i, an = dd;
			}
		}


		
			cout << ans << " " << an << endl;
	
}

	
	return 0;

}