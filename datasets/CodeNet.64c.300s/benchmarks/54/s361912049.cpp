#include <cmath>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <stack>
#include <bitset>
#include <functional>
#include <numeric>
#include <utility>
#include <iomanip>
#include <cstdio>
#include <cctype>
#include <queue>
#include <complex>
#include <climits>

typedef long long ll;

using namespace std;

unsigned long long int dp[101][21];

int main(){
	int n, a[101];
	cin >> n;
	for(int i=1; i<=n; ++i){
		cin >> a[i];
	}

	dp[0][0] = 1;

	for(int i=1; i<n; ++i){
		for(int j=0; j<21; ++j){
			if(j-a[i] >= 0){
				dp[i][j] += dp[i-1][j-a[i]];
			}
			if(j+a[i] <= 20){
				dp[i][j] += dp[i-1][j+a[i]];
			}

			if(i == 1 && a[i] == 0) dp[i][j] = dp[i-1][j];
		}
	}

	cout << dp[n-1][a[n]] << endl;


    return 0;
}