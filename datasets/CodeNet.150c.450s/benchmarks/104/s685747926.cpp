#include<bits/stdc++.h>
using namespace std;
 
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define SORT(c) sort((c).begin(),(c).end())
#define IINF INT_MAX
#define LLINF LLONG_MAX
 
typedef long long ll;
typedef pair<int, int> ii;
 
int main(){

	int w, n;
	cin >> w >> n;
	vector<int> ans(w);
	rep(i, w)  ans[i] = i+1;
	rep(i, n){
		int a, b;
		scanf("%d,%d", &a, &b);
		swap(ans[--a], ans[--b]);
	}
 
 	rep(i, w) cout << ans[i] << endl;
 
	return 0;
}