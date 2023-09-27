#include <string>
#include <vector>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <map>
#include <list>
#include <set>
#include <numeric>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <cstring>
#include <climits>
#include <cfloat>
#include <ctime>
#include <complex>
#include <cassert>
#include <iomanip>
using namespace std;
typedef long long LL;
typedef pair<int,int> P;

int in[100];
LL dp[100][21];
int N;
int main() {
	cin >> N;
	for(int i=0;i<N;i++){
		cin >> in[i];
	}
	dp[0][in[0]]=1;
	for(int i=1;i<N-1;i++){
		for(int j=0;j<=20;j++){
			if(j-in[i]>=0){
				dp[i][j]+=dp[i-1][j-in[i]];
			}
			if(j+in[i]<=20){
				dp[i][j]+=dp[i-1][j+in[i]];
			}
		}
	}
	cout << dp[N-2][in[N-1]] << endl;
}