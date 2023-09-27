#include <iostream>
using namespace std;

#define INF 1000000
#define MAX_N 50000

int main(){
	int n, m;
	cin >> n >> m;
	
	int c[20];
	for(int i=0;i<m;i++)
		cin >> c[i];
	
	int dp[MAX_N+1];   //dp[i] : i円を支払うための最小枚数

	for(int i=1;i<=MAX_N;i++)   
		dp[i] = INF;            //初期化(dp[0]=0)

	for(int i=0;i<=n;i++){ 		//i円を支払うとき
		for(int j=0;j<m;j++){   	//j番目のコインを使うとき
			if(i+c[j] <= n)
				dp[i+c[j]] = min(dp[i+c[j]], dp[i]+1);	
		}
	}

	cout << dp[n] << endl;

	return 0;
}
