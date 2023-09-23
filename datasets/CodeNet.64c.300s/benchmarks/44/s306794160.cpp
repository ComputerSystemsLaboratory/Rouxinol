#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define INF (1<<21)
int main(){
	int m;
	while(cin >> m , m){
		int wf[10][10] = {0};
		rep(i,10)rep(j,10)wf[i][j] = INF;
		rep(i,10)wf[i][i] = 0;
		int n = 0;
		rep(i,m){
			int a,b,c;
			cin >> a >> b >> c;
			wf[a][b] = wf[b][a] = c;
			n = max(n,max(a,b)+1);
		}
		rep(k,n)rep(i,n)rep(j,n)
			wf[i][j] = min(wf[i][j] , wf[i][k]+wf[k][j]);
		
		pair<int,int> d = make_pair(INF,-1);

		rep(i,n){
			int sum = 0;
			rep(j,n)sum += wf[i][j];
			d = min(d,make_pair(sum,i));
		}
		cout << d.second << " " << d.first << endl;
	}
}