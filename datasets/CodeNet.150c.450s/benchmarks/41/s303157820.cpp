#include<bits/stdc++.h>
using namespace std;
int n,m,s[10000],e[10000],w[10000];
long long d[150][150];

int main(){
	cin >> n >> m;
	long long inf=1e18;
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			d[i][j]=inf;
		}
	}
	
	for(int i=0 ; i<m ; i++){
		cin >> s[i] >> e[i] >> w[i];
		d[ s[i] ][ e[i] ]=w[i];
	}
	
	for(int k=0 ; k<n ; k++){
		for(int i=0 ; i<n ; i++){
			for(int j=0 ; j<n ; j++){
				if( i==k || j==k) continue;
				d[i][j]=min( d[i][j] , d[i][k]+d[k][j] );
				if(i==j){
					if(d[i][j]<0){
						cout << "NEGATIVE CYCLE";
						cout << endl;
						exit(0);
					}
				}
			}
		}
	}
	
	for(int i=0 ; i<n ; i++){
		for(int j=0 ; j<n ; j++){
			if(i==j){
				cout << "0";
				if(j<n-1) cout << ' ';
				continue;
			}
			if(d[i][j]>2e9){
				cout << "INF";
				if(j<n-1) cout << ' ';
				continue;
			}
			cout << d[i][j];
			if(j<n-1) cout << ' ';
		}
		cout << endl;
	}
	
}
