#include <algorithm>
#include <iostream>
#include <math.h>
#include <stdio.h>
#include <string>
#include <sstream>
#include <vector>
#include <set>
#include <stack>
#include <map>
#include <cmath>
#include <queue>
#define rep(i, n) for(int i = 0; i < (int)(n); i++)
using namespace std;
typedef long long ll;
#define MAX_N 100
const ll INF = 1000000000000000;
ll d[MAX_N][MAX_N];

void init(){
	rep(i,MAX_N){
		rep(j,MAX_N) d[i][j] = INF;
		d[i][i] = 0;
	}
}

void warshall_floyd(int n){
	for(int k = 0; k < n; k++){
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				if( d[i][k] == INF || d[k][j] == INF){
					// do nothing
				}else{
					d[i][j] = min(d[i][j],d[i][k] + d[k][j]);	
				}
			}
		}
	}
}

bool existNegativeCycle(int n){
	for(int start = 0; start < n; start++){
		if(d[start][start] < 0){
			return true;
		}
	}
	return false;
}

int main()
{
	init();
	int v,e;
	cin>>v>>e;
	rep(i,e){
		ll s,t,c;
		cin>>s>>t>>c;
		d[s][t] = c;
	}
	warshall_floyd(v);
	if( existNegativeCycle(v) == true){
		cout<<"NEGATIVE CYCLE"<<endl;
	}else{
		rep(i,v){
			rep(j,v-1){
				if(d[i][j] == INF){
					cout<<"INF ";
				}else{
					cout<<d[i][j]<<" ";
				}
			}
			if(d[i][v-1] == INF){
				cout<<"INF"<<endl;
			}else{
				cout<<d[i][v-1]<<endl;
			}
		}
	}
	return 0;
}


