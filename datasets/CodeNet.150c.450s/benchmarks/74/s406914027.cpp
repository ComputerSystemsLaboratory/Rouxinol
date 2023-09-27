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
#include <cctype>

using namespace std; 

#define MP make_pair
typedef unsigned long long ULL;

long dp[50001];


int main(){

	long n;
	int m;
	cin>>n>>m;

	vector<int> d(m);
	for(int i=0;i<m;i++){
		cin>>d[i];
		dp[d[i]]=1;
	}

	for(long i=2;i<=n;i++){
		if(dp[i]==0) dp[i]=60000;
		for(int j=0;j<m;j++){
			if(i<d[j]) continue;
			if(dp[i-d[j]]!=0) dp[i]=min(dp[i],dp[i-d[j]]+1);
		}
	}

	cout<<dp[n]<<endl;

	return 0;
}