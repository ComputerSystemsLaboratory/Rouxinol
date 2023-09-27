#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <list>
#include <map>
#include <string>
#include <functional>
#include <math.h>
#include <utility>
#define INF 100000000
using namespace std;
typedef pair<int,int> P;
typedef long long int ll;
ll dp[2][21],n;
int d;
int main()
{
	cin>>n>>d;n--;
	fill(dp[0],dp[0]+21,0);
	dp[0][d]=1;
	while(n--){
		fill(dp[1],dp[1]+21,0);
		cin>>d;
		for(int i=0;i<=20;i++){
			if(0<=i+d&&i+d<=20)dp[1][i+d]+=dp[0][i];
			if(0<=i-d&&i-d<=20)dp[1][i-d]+=dp[0][i];
		}
		for(int i=0;i<=20;i++)dp[0][i]=dp[1][i];
	}
	cout<<dp[1][0]<<endl;
}