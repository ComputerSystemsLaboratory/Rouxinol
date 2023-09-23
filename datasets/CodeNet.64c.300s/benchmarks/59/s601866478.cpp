#define _CRT_SECURE_NO_WARNINGS

#include<fstream>
#include<iostream>
#include<string>
#include<iomanip>
#include<list>
#include<math.h>
#include<stack>
#include<queue>
#include<vector>
#include<algorithm>
#include<utility>

using namespace std;

int main(){
	int n;
	int cnt = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int t;
		cin >> t;
		if ((t & 1 == 1 && t != 1) || t == 2) {// （奇数かつ1でない）または2であるなら
			int m = sqrt((double)t);
			int j = 3;
			while (j <= m) {
				if (t % j == 0) { // 素数でないなら
					break;
				}
				j += 2;
			}
			if (j > m) { // 素数であるなら
				cnt++;
			}
		}
	}
	cout << cnt << endl;
}