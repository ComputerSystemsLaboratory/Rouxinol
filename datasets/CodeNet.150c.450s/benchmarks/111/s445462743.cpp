#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <bitset>
#include <fstream>
#include <cmath>
using namespace std;
typedef long long ll;

const int MAX_N = 100;
const int MAX_P = 21;

ll dp[MAX_N][MAX_P];		//dp[iツ氾板姪堋づ慊づづ[jツづーツ催ャツづゥツパツタツーツδ転

int main()
{
	int N;
	cin>>N;

	vector<int> num(N);
	for(int i = 0; i < N; i++) cin>>num[i];

	for(int i = 0; i < MAX_P; i++)
		dp[0][i] = (i == num[0] ? 1 : 0);

	for(int i = 1; i < N-1; i++){
		for(int j = 0; j < MAX_P; j++){
			dp[i][j] = 0;
			if(0 <= j+num[i] && j+num[i] < MAX_P) dp[i][j] += dp[i-1][j+num[i]];
			if(0 <= j-num[i] && j-num[i] < MAX_P) dp[i][j] += dp[i-1][j-num[i]];
		}
	}
	
	cout<<dp[N-2][num[N-1]]<<endl;
}