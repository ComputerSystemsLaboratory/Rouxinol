#include  <bits/stdc++.h>
#define rep(i,n) for(int (i)=0;(i)<(n);(i)++)
using namespace std;
typedef long long int ll;

const int vmax=110;
const ll inf=1LL<<60;

int N,M;
ll dist[vmax][vmax];

bool warshall_floyd(){
	rep(k,N)rep(i,N)rep(j,N){
		if(dist[i][k]==inf||dist[k][j]==inf) continue;
		dist[i][j]=min(dist[i][j],dist[i][k]+dist[k][j]);
	}
	rep(i,N) if(dist[i][i]<0) return true;
	return false;
}

int main(void){
	cin >> N >> M;
	rep(i,N)rep(j,N) dist[i][j]=(i==j)?0:inf;
	rep(i,M){
		int a,b,c;
		cin >> a >> b >> c;
		dist[a][b]=c;
	}
	if(warshall_floyd())
		cout << "NEGATIVE CYCLE" << endl;
	else{
		rep(i,N){
			rep(j,N){
				cout << (j==0?"":" ");
				if(dist[i][j]==inf)
					cout << "INF";
				else
					cout << dist[i][j];
			}
			cout << endl;
		}
	}
	return 0;
}