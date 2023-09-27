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
	int n;
	int dp[100001];
	int pos = 1;

	cin >> n;
	cout << n << ":";
	FOR(i, 2, n) {
		if (pos == 1 && i > sqrt(n)) {
			dp[pos] = n;
			pos++;
			n = 1;
		}
		while (n%i == 0) {
			dp[pos] = i;
			pos++;
			n /= i;
		}
	}
	FOR(i, 1, pos - 1) {
		cout << " " << dp[i];
	}
	cout << endl;
	return 0;
}
