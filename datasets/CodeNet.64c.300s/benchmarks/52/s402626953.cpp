#include <cmath>
#include <ctime>
#include <algorithm>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <sstream>
#include <fstream>
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
#include <cstring>

using namespace std;

const int INF = 1 << 29;
typedef long long ll;
typedef pair<int,int> PI;

int n, s, t, res;

void dfs(int n, int t, int sum){
	if(n == 0 && sum == s) {
		res++;
		return ;
	}
	if(sum > s || n <= 0 || t > s-sum) return ;
	for(int i=t+1; i<=10; ++i){
		dfs(n-1, i, sum+i-1);
	}
}

int main(void){
	while(cin >> n >> s, n|s){
		if(n == 0 && s == 0) break;
		res = 0;
		int ans;
		dfs(n, 0, 0);
		cout << res << endl;
	}

	return 0;
}