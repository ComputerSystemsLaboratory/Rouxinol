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
using namespace std;
typedef long long ll;

const int MAX_R = 20;

int dp[MAX_R][MAX_R];

int main()
{
	int A, B, N;
	while(cin>>A>>B && (A || B)){
		cin>>N;
		for(int a = 0; a < A; a++) for(int b = 0; b < B; b++) dp[a][b] = 0;
		for(int i = 0; i < N; i++){
			int x, y;
			cin>>x>>y;
			dp[x-1][y-1] = -1;
		}
		for(int a = 0; a < A; a++){
			for(int b = 0; b < B; b++){
				if(dp[a][b] == -1)	dp[a][b] = 0;
				else if(a>0&&b>0)	dp[a][b] = dp[a-1][b] + dp[a][b-1];
				else if(a>0)		dp[a][b] = dp[a-1][b];
				else if(b>0)		dp[a][b] = dp[a][b-1];
				else				dp[a][b] = 1;
			}
		}
		cout<<dp[A-1][B-1]<<endl;
	}
}