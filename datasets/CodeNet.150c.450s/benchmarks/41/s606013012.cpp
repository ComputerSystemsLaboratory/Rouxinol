#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<vector<ll> > AdjMat;

#define INF (ll)1e+15

int main(){

	  int V,E; cin >> V >> E;
	  AdjMat G(V,vector<ll>(V,INF));

	  for(int i=0; i<E; i++){
			int s,t,d; cin >> s >> t >> d;
			G[s][t] = d;
	  }

	  for(int i=0; i<V; i++) G[i][i] = 0;

	  for(int k=0; k<V; k++)
			for(int j=0; j<V; j++)
				  for(int i=0; i<V; i++)
						G[i][j] = min(G[i][j], G[i][k] + G[k][j]);

	  for(int i=0; i<V; i++)
			if(G[i][i] != 0){	  cout << "NEGATIVE CYCLE" << endl;	  return 0;			}

	  for(int i=0; i<V; i++){
			for(int j=0; j<V; j++){
				  if(G[i][j] >= 1e+14) cout << "INF";
				  else cout << G[i][j];
				  if(j==V-1) cout << endl;
				  else cout << " ";
			}
	  }
}
			
	  
			   