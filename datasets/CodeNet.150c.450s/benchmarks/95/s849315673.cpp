//#include <bits/stdc++.h>
//#include <stdio.h>
#include<iostream>
#include<cstdio>
#include<bitset>
#include<algorithm>
#include<vector>
#include<list>
#include<queue>
#include<stack>
#include<string>
#include<string.h>
#include<cmath>
#include<utility>
#include<functional>
#include<map>
#include<set>
#include<cctype>
#include<fstream>


#define FOR(i, a, b) for( int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for( int i=(a);i>=(b);i--)
#define LFOR(i, a, b) for( long long int i=(a);i<=(b);i++)
#define LRFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 600000000 //2000000000
#define LINF 1000000000000000000 //9000000000000000000 大きいとワ―シャルフロイドでオーバーフローを起こす
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair< long long int, long long  int> P;

int dy[5] = { 0,0,1,-1,0 };
int dx[5] = { 1,-1,0,0,0 };



int main(void) {

	int n;

	while (1) {
		cin >> n;
		if (n == 0) {
			break;
		}
		int count = 0;
		bool flag = false;//false 床　,true 台
		bool r = false;
		bool l = false;

		string f[151];
		FOR(i, 1, n) {
			cin >> f[i];
		}

		FOR(i, 1, n) {
			if (f[i] == "lu") {
				l = true;
				if (flag == false && l == true && r == true) {
					count++;
					flag = true;
				}
			}
			if (f[i] == "ru") {
				r = true;
				if (flag == false && l == true && r == true) {
					count++;
					flag = true;
				}
			}
			if (f[i] == "ld") {
				l = false;
				if (flag == true && l == false && r == false) {
					count++;
					flag = false;
				}
			}
			if (f[i] == "rd") {
				r = false;
				if (flag == true && l == false && r == false) {
					count++;
					flag = false;
				}
			}
		}

		cout << count << endl;

	}

	return 0;
}
