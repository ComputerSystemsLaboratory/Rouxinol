#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<stack>
#include<queue>
#include<list>
#include<set>
#include<cmath>

#define REP(i,n) for(int (i) = 0;(i) < (n);(i)++)
using namespace std;
bool dp[20][2001];


int main(){
	int n,a,qn,q;
	vector<int> A;
	cin >> n;
	REP(i,n){cin>>a;dp[i][a]=dp[i][0]=true;A.push_back(a);}
	cin >> qn;

	for(int j=1;j<n;j++){
		REP(k,2001){
				dp[j][k] |= dp[j-1][k]; 
				if(A[j] < k) dp[j][k] |= dp[j-1][k-A[j]];
		}
	}
	REP(i,qn){
		cin >> q;cout<< ((dp[n-1][q])?"yes":"no") << endl;
	}
}