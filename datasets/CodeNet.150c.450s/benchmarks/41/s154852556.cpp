#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<vector<ll> > AdjMat;

#define INF (ll)1e+18


AdjMat Warshall_Floyd(AdjMat& Gin){

	  AdjMat G = Gin;
	  int V = G.size();
	  for(int k=0; k<V; k++)
			for(int j=0; j<V; j++)
				  for(int i=0; i<V; i++)
						G[i][j] = min(G[i][j], G[i][k] + G[k][j]);
	  return G;
}



int main(){

	  int V,E; cin >> V >> E;

	  AdjMat G(V,vector<ll>(V,INF));
	  for(int i=0; i<E; i++){
			ll s,t,d; cin >> s >> t >> d;
			G[s][t] = d;
	  }
	  for(int i=0; i<V; i++) G[i][i] = 0;

	  G = Warshall_Floyd(G);

	  for(int i=0; i<V; i++)
			if(G[i][i] != 0){	  cout << "NEGATIVE CYCLE" << endl;	  return 0;			}

	  for(int i=0; i<V; i++){
			for(int j=0; j<V; j++){
				  if(G[i][j] >= INF/10) cout << "INF";
				  else cout << G[i][j];
				  if(j==V-1) cout << endl;
				  else cout << " ";
			}
	  }
}
			
	  
			   