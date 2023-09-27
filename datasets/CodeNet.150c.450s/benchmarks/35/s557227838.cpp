#include <iostream>
#include <string>
#include <vector>
#include <cmath>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <cstdio>
#include <functional>
#include <set>
#include <sstream>
#include <map>

using namespace std;

int main()
{
	int n;
	while(cin>>n,n){
		vector<long long> dp(n);
		long long res;
		cin>>dp[0];
		res=dp[0];

		for(int i=1;i<n;i++){
			long long a;
			cin>>a;
			dp[i]=max(dp[i-1]+a,a);
			res=max(res,dp[i]);
		}
		cout<<res<<endl;
	}


	return 0;
}