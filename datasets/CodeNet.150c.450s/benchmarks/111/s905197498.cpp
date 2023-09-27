#include <iostream>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <numeric>
#include <map>
#include <vector>
#include <string>
#include <vector>
#include <cassert>
#include <cmath>
#include <cctype>
#include <queue>
#include <algorithm>
#include <memory>
#include <memory.h>
using namespace std;
typedef long long ll;
const int INF = 1 << 30;

int main(){
	int n;
	ll dp[21][100];
	int nums[100];
	while(cin >> n){
		for(int i = 0; i < n; i++){
			cin >> nums[i];
		}
		fill(&dp[0][0], &dp[20][99]+1, 0);
		dp[nums[0]][0] = 1;
		for(int i = 1; i < n-1; i++){
			for(int j = 0; j <= 20; j++){
				int n1 = j + nums[i];
				int n2 = j - nums[i];
				if(n1 <= 20){
					dp[n1][i] += dp[j][i-1];
				}
				if(n2 >= 0){
					dp[n2][i] += dp[j][i-1];
				}
			}
		}
		cout << dp[nums[n-1]][n-2] << endl;;
	}
	return 0;
}