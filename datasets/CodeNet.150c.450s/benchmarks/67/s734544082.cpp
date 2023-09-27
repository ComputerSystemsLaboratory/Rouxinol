#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

#define rep(i, j) for(int i = 0; i < j; i++)
// sp_rep
#define sp_rep(i, j) for(int i = 1; i <= j; i++)
#define all(i) i.begin(), i.end()
#define ll long long

using namespace std;

string Num2Str(int num)
{
	stringstream ss;
	ss << num;
	return ss.str();
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	// code
	int n;
	while (cin >> n && n!=0) {
		int cnt = 0, sum = 0;
		sp_rep(i, n) {
			for (int j = i; j < n; j++) {
				sum += j;
				if (sum == n) cnt++;
			}
			sum = 0;
		}
		cout << cnt << endl;
	}

	return 0;
}