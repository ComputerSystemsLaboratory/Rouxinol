/*************************************************************************
    > File Name: aoj0189.cpp
    > Author:    WArobot 
    > Blog:      http://www.cnblogs.com/WArobot/ 
    > Created Time: 2017??´06???20??\ ????????? 14??¶54???14?§?
 ************************************************************************/

#include<bits/stdc++.h>
using namespace std;

#define ll long long
const int MAX_N = 100;
const int INF = 1e9;
int G[MAX_N][MAX_N];
int m , n;

void init(){
	for(int i = 0 ; i < MAX_N ; i++){
		for(int j = 0 ; j < MAX_N ; j++){
			if( i == j )	G[i][j] = 0;
			else			G[i][j] = INF;
		}
	}
}
void floyd(){
	for(int k = 0 ; k < n ; k++){
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < n ; j++){
				if( G[i][j] > G[i][k] + G[k][j] ){
					G[i][j] = G[i][k] + G[k][j];
				}
			}
		}
	}
}
void solve(){
	ll sum , num = -1 , maxsum = INF;
	for(int i = 0 ; i < n ; i++){
		sum = 0;
		for(int j = 0 ; j < n ; j++)	sum += (ll)G[i][j];
		if( maxsum > sum ){
			num = i ,	maxsum = sum;
		}
	}
	printf("%lld %lld\n",num , maxsum);
}
int main(){
	int u , v , cost;
	while(~scanf("%d",&m) && m){
		init();		n = -1;
		for(int i = 0 ; i < m ; i++){
			scanf("%d%d%d",&u,&v,&cost);
			G[u][v] = G[v][u] = cost;
			n = max( n , u );	n = max( n , v );
		}
		n++;		
		floyd();
		solve();
	}
	return 0;
}