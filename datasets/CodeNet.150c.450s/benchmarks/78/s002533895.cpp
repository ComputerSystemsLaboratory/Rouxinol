#include <stdio.h>
#include <iostream>
#include <vector>
#include <list>
#include <cmath>
#include <fstream>
#include <algorithm>
#include <string>
#include <queue>
#include <set>
#include <map>
#include <complex>
#include <iterator>
#include <cstdlib>
#include <sstream>

using namespace std;

#define EPS (1e-10)
#define EQ(a,b) (abs((a) - (b)) < EPS)
#define EQV(a,b) (EQ((a).real(),(b).real()) && EQ((a).imag(),(b).imag()))

typedef complex<double> P;
typedef long long ll;

const int MAX_SIZE = 10000;

const int INF = 100000000;

int main(){

	int n;
//	int dp[1000001];
	vector<int> dp(1000001,0);
	vector<int> dp2(1000001,0);
		vector<int> triNum;
		int sum = 1;
		int idx = 2;
		int allSum = 0;
		while(sum <= 1000000){
			allSum += sum;
			triNum.push_back(allSum);
			sum += idx;
			idx++;
		}
		fill(dp.begin(),dp.end(),INF);
		fill(dp2.begin(),dp2.end(),INF);
		dp[1] = 1;
		dp[2] = 2;
		dp[3] = 3;
		dp[0] = 0;

		dp2[1] = 1;
		dp2[2] = 2;
		dp2[3] = 3;
		dp2[0] = 0;


		for(int i = 4; i <= 1000001; i++){
			for(int j = 0; j < triNum.size(); j++){
				if(i - triNum[j] == 0){
					if(triNum[j] % 2)
						dp2[i] = 1;
					break;
				}
				else if(i - triNum[j] < 0){
					break;
				}
				if(triNum[j] % 2)
					dp2[i] = min(dp2[i],dp2[i-triNum[j]]+1);
			}

			for(int j = 0; j < triNum.size(); j++){
				if(i - triNum[j] == 0){
					dp[i] = 1;
					break;
				}
				else if(i - triNum[j] < 0){
					break;
				}
				dp[i] = min(dp[i],dp[i-triNum[j]]+1);
			}
		}

	while(cin >> n && n != 0){

		cout << dp[n] << " " << dp2[n] << endl;
	}

	return 0;
}