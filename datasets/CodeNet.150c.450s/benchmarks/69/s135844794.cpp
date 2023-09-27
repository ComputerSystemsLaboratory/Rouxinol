#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>
#include <array>
#include <stack>
#include <queue>
#include <chrono>
#include <numeric>

#pragma warning(disable:4996)
#define REP(i,n) for(int i = 0 ; i < n ; ++i)
typedef long long Int;

using namespace std;

int balls[10];
int ar[10];

bool solve()
{
	int a(0);
	int b(0);

	REP(i, 10){
		if (ar[i]){
			if (a > balls[i])
				return false;
			a = balls[i];
		}
		else{
			if (b > balls[i])
				return false;
			b = balls[i];
		}
	}
	return true;
}

int main()
{
	cin.tie(0); ios::sync_with_stdio(false);
	//fstream fs("input.txt");
	////////////ここから開始///////////
	int n(0);
	cin >> n;
	while (n--){
		bool f = false;
		REP(i, 10){
			cin >> balls[i];
			ar[i] = 0;
		}
		for (int i = 0; i < 1 << 10; ++i){
			REP(j, 10)
				ar[9 - j] = i >> j & 1;

			f |= solve();
		}
		string ans = f ? "YES" : "NO";
		cout << ans << endl;
	}
	
	return 0;
}