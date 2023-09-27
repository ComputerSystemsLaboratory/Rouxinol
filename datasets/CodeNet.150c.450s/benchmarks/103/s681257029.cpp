#include <cstdio>
#include <cstring>
#include <iostream>

using namespace std;

const int MAX_D = 10;
const int MAX_N = 10;
const int MAX_S = 100;
int memo[MAX_D + 1][MAX_N + 1][MAX_S + 1];

int sum_of_integers(int d, int n, int s)
{
	if (memo[d + 1][n][s] != -1) return memo[d + 1][n][s];
	if (n == 0) return s == 0;
	if (s < 0) return 0;
	int res = 0;
	for (int i = d + 1; i <= 9; i++) res += sum_of_integers(i, n - 1, s - i);
	return memo[d + 1][n][s] = res;
}

int main(){
	memset(memo, -1, sizeof(memo));
	int n, s;
	while (cin >> n >> s, n || s){
		cout << sum_of_integers(-1, n, s) << endl;
	}
	return 0;
}