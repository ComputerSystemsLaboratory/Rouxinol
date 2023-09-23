#include <iostream>
#include <cstring>
#include <cstdlib>
#include <sstream>
#include <stack>
#include <queue>
#include <list>
#include <stdio.h>
#include <algorithm>
#define MAX 100000
using namespace std;
typedef long long ll;
int dp[50];
int main()
{	
	int n;
	cin>>n;
	dp[0]=dp[1]=1;
	for(int i=2;i<=n;i++) dp[i]=dp[i-1]+dp[i-2];
	cout<<dp[n]<<endl;
	return 0;
}
