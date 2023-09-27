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
vector<int> w;
int k,n;

int solve(int f,int e){
	if(e-f==1) return e;
	int m = (f+e)/2,j=0;
	REP(i,k){
		int sum=0;
		if(m < w[j])break;
		if(j == n)break;
		while(j < n && sum+w[j] <= m)sum += w[j++];
	}
	if(j==n) return solve(f,m);
	return solve(m,e);
}

int main(){
	int sum=0,x;
	cin >> n >> k;
	REP(i,n) {
		cin >> x;w.push_back(x);
		sum += x;
	}
	cout << solve(ceil((double)sum/k)-1,sum) << endl;
	return 0;
}