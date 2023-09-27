#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll INF=0x3f3f3f3f3f3f3f3f;

int n,m;
ll d[105][105];
bool v[105][105];

int main() {
	cin>>n>>m;
	for (int i=0;i<n;i++) for (int j=0;j<n;j++) {
		if (i==j) {
			d[i][j]=0;
			v[i][j]=1;
		}
		else d[i][j]=INF;	
	}
	for (int i=0;i<m;i++) {
		int s,t,l; cin>>s>>t>>l;
		d[s][t]=l;
		v[s][t]=1;
	}
	for (int k=0;k<n;k++)
	  for (int i=0;i<n;i++)
	  for (int j=0;j<n;j++)
	    if (v[i][k] && v[k][j]) {
	    	d[i][j]=min(d[i][j],d[i][k]+d[k][j]);
	    	v[i][j]=1;
	    }
	for (int i=0;i<n;i++) 
		if (d[i][i]<0) {
			cout<<"NEGATIVE CYCLE"<<'\n';
			return 0;
		}
	for (int i=0;i<n;i++) for (int j=0;j<n;j++) {
		if (d[i][j]==INF) cout<<"INF";
		else cout<<d[i][j];
		cout<<" \n"[j+1==n];
	}
}
