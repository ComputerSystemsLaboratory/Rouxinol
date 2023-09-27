#include <bits/stdc++.h>
#define rep(i,n) for(int i = 0; i < n; i++)

using namespace std;
const long long INF=1e18;

int main(){
    int v,e;
    cin >> v >> e;
    vector<vector<long long> > dif(101,vector<long long>(101,INF));
    
    for(int i = 0; i < v; i++)    dif[i][i] = 0;
    
    for(int i = 0; i < e; i++){
    	int a,b; cin >> a >> b;
        cin >> dif[a][b]; 
    }
    
    for(int k = 0; k < v; k++){
    	for(int i = 0; i < v; i++){
    		for(int j = 0; j < v; j++){
    			if(dif[i][k] == INF || dif[k][j] == INF) continue;
    			dif[i][j] = min(dif[i][j],dif[i][k] + dif[k][j]);
    		}
    	}
    }
    bool can = false;
    for(int i = 0; i < v; i++){
    	if(dif[i][i] < 0) can = true;
    }
    if(can)  cout << "NEGATIVE CYCLE" << endl;
    else{
    	for(int i = 0; i < v; i++){
    		for(int j = 0; j < v; j++){
    			if(dif[i][j] == INF) 	cout << "INF";
    			else                    cout << dif[i][j];
    			if(j != v-1)  cout << ' ';
    		}
    		cout << endl;
    	}
    }
     return 0;	
}
