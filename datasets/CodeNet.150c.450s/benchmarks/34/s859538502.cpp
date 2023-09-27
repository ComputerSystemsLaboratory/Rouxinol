#include <iostream>
#include <vector>
#include <string.h>

#define pb push_back

using namespace std;

int dp[35];

int main(void)
{
	int n;
	int maxx=0;
	vector<int> v;
	int year;
	int i1;

	while(1){
		cin>>n;
		if(n==0) break;
		v.pb(n);
		maxx=max(maxx,n);
	}

	dp[0]=1;
	dp[1]=1;
	dp[2]=2;
	for(i1=3;i1<=maxx;i1++){
		dp[i1]=dp[i1-1]+dp[i1-2]+dp[i1-3];
	}

	for(i1=0;i1<v.size();i1++){
		if(dp[v[i1]]%10==0) {
			year=dp[v[i1]]/10;
		}
		else {
			year=dp[v[i1]]/10+1;
		}

		if(year%365==0){
			year=year/365;
		}
		else {
			year=year/365+1;
		}
		cout<<year<<endl;
	}

	return 0;
}