#include <iostream>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <map>
#include <fstream>
#include <array>
#include <utility>
#include <functional>
using namespace std;
typedef long long Int;
#define REP(i , x) for(int i = 0 ; i < x ; ++i)

typedef pair<int, int> P;

int dp[60];

int main()
{
	int w(0),n(0);
	REP(i, 60){
		dp[i] = i;
	}
	cin >> n >> w;
	REP(i, w){
		int a, b;
		char c;
		scanf("%d,%d", &a,&b);
		swap(dp[a], dp[b]);
	}
	REP(i, n){
		cout << dp[i+1] << endl;
	}
}