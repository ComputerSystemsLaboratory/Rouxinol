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

bool isprime[1000000];

int main(int argc, char **argv){
	int n;
	int cnt;
	int checkcnt = 0;
	for (int i = 0; i < 1000000; i++) {
		isprime[i] = true;
	}
	while (cin >> n && checkcnt < 30) {
		cnt = 0;
		int i;
		for (i = 2; i <= sqrt(n); i++) {
			if (isprime[i]) {
				for (int j = 2; j <= n / i; j++) {
					isprime[i * j] = false;
				}
			}
		}
		for (int k = 2; k <= n; k++) {
			if (isprime[k]) {
				cnt++;
			}
		}
		cout << cnt << endl;
		checkcnt++;
	}
	return 0;
}