#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    while(1){
        int a,b;
        cin >> a >> b;
        if(a+b == 0) break;
        short flg[20][20] = {{0}};
        int n,A,B;

        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> A >> B;
            flg[A][B] = 1;
        }
        int dp[20][20] = {{0}};
        dp[0][1] = 1;
        for(int i = 1; i <= a; i++){
            for(int j = 1; j <= b; j++){
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
                if(flg[i][j] == 1) dp[i][j] = 0;
            }
        }
        cout << dp[a][b] << endl;
    }
	return 0;
}