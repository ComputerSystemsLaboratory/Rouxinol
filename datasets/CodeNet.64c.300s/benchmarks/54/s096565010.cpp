#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;
typedef long long ll;

int main()
{
	int N; cin >> N;

	ll* val = new ll[N];
	ll* dp = new ll[21*(N-1)]; fill(dp, dp+(21*(N-1)), 0LL);

	for(int i=0; i<N; i++){ cin >> val[i];}
	dp[val[0]]=1LL;
	
	for(int i=0; i<N-2; i++){
		for(int j=0; j<21; j++){
			if(dp[ 21*i+j ] != 0LL){
				if(j+val[i+1] <= 20LL){ dp[ 21*(i+1)+j+val[i+1] ] += dp[ 21*i+j ];}
				if(j-val[i+1] >= 0LL){ dp[ 21*(i+1)+j-val[i+1] ] += dp[ 21*i+j ];}
			}
		}
	}

	cout << dp[21*(N-2) + val[N-1]] << endl;

	delete[] val; delete[] dp;
	return 0;
}