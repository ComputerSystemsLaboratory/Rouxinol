#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#include<vector>
#include<utility>
#include<stack>
#include<queue>
#include<list>
#include<bitset>
#include<functional>

#define FOR(i, a, b) for(long long int i=(a);i<=(b);i++)
#define RFOR(i, a, b) for(long long int i=(a);i>=(b);i--)
#define MOD 1000000007
#define INF 1000000000 //2000000000
#define LLINF 1000000000000000000 //9000000000000000000
#define PI 3.14159265358979

using namespace std;
typedef long long int ll;
typedef pair<long long int, long long int> P;

int main(void) {
	struct Dice {
		int suf[7];
	};

	Dice d1;
	int q;
	int a, b;
	int e, f;
	int res[25];

	FOR(i, 1, 6) {
		cin >> d1.suf[i];
	}
	cin >> q;
	FOR(i, 1, q) {
		cin >> a >> b;
		FOR(t, 1, 6) {
			if (d1.suf[t] == a) {
				e = t;
			}
		}
		FOR(t, 1, 6) {
			if (d1.suf[t] == b) {
				f = t;
			}
		}
		switch (e) {
		case 1:
			switch (f) {
			case 1:
				break;
			case 2:
				res[i] = 3;
				break;
			case 3:
				res[i] = 5;
				break;
			case 4:
				res[i] = 2;
				break;
			case 5:
				res[i] = 4;
				break;
			case 6:
				break;
			}
			break;
		case 2:
			switch (f) {
			case 1:
				res[i] = 4;
				break;
			case 2:
				break;
			case 3:
				res[i] = 1;
				break;
			case 4:
				res[i] = 6;
				break;
			case 5:
				break;
			case 6:
				res[i] = 3;
				break;
			}
			break;
		case 3:
			switch (f) {
			case 1:
				res[i] = 2;
				break;
			case 2:
				res[i] = 6;
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				res[i] = 1;
				break;
			case 6:
				res[i] = 5;
				break;
			}
			break;
		case 4:
			switch (f) {
			case 1:
				res[i] = 5;
				break;
			case 2:
				res[i] = 1;
				break;
			case 3:
				break;
			case 4:
				break;
			case 5:
				res[i] = 6;
				break;
			case 6:
				res[i] = 2;
				break;
			}
			break;
		case 5:
			switch (f) {
			case 1:
				res[i] = 3;
				break;
			case 2:
				break;
			case 3:
				res[i] = 6;
				break;
			case 4:
				res[i] = 1;
				break;
			case 5:
				break;
			case 6:
				res[i] = 4;
				break;
			}
			break;
		case 6:
			switch (f) {
			case 1:
				break;
			case 2:
				res[i] = 4;
				break;
			case 3:
				res[i] = 2;
				break;
			case 4:
				res[i] = 5;
				break;
			case 5:
				res[i] = 3;
				break;
			case 6:
				break;
			}
			break;
		}
	}
	FOR(i, 1, q) {
		cout << d1.suf[res[i]] << endl;
	}

	
	return 0;
}
