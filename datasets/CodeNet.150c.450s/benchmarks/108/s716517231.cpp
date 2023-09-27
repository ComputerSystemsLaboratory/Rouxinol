#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <ctype.h>
#include <ctime>
#include <cstdio>
#include <vector>
#include <string>
#include <bitset>
#include <cctype>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <numeric>
#include <complex>
#include <sstream>
#include <fstream>
#include <iomanip>
#include <cassert>
#include <iostream>
#include <iterator>
#include <algorithm>

using namespace std;
#define N 100
#define INF 1e9

queue<int> Q;
int n,M[N][N];
int dist[N];

void bsf(int l){
	Q.push(l);
	for(int i = 0;i < n;i++) dist[i] = INF;

	dist[l]=0;
	while(!Q.empty()){
		int u = Q.front();
		Q.pop();
		for(int i=0;i<n;i++){
			if(M[u][i] == 0)continue;
			if(dist[i] != INF)continue;
			dist[i] = dist[u] + 1;
			Q.push(i);
		}
	}

	for(int i=0;i<n;i++){ 
		if(dist[i] == INF)dist[i] = -1;

		cout<<i+1<<" "<<dist[i]<<endl;
	}
}


int main(){
	int u,k,v;

	cin >> n;
	for(int i = 0;i < n;i++){
		for(int j = 0;j < n;j++) M[i][j] = 0;
	}

	for(int i = 0;i < n;i++){
		cin >> u >> k;
		u--;
		for(int j = 0;j < k;j++){
			cin >> v;
			v--;
			M[u][v] = 1;
		}
	}
	bsf(0);
	return 0;
}