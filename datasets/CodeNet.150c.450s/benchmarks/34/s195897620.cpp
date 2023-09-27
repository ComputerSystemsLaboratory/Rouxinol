#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int dp[31];

const int DIV = 3650;

int main(void)
{
	while(1){
		int num;
		cin >> num;
		if(num == 0)
			return 0;
		memset(dp,0,sizeof(dp));
		dp[0] = 1;
		for(int i=1;i<=num;++i){//どの段から？
			for(int j=1;j<=3;++j){//何段？
				if(i-j < 0)
					continue;
				dp[i] += dp[i-j];
			}
		}
		cout << ceil((double)dp[num]/DIV) << endl;
	}
	return 0;
}