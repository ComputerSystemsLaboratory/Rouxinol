#include<cstdio>
#include<cstdlib>
#include<cmath>
#include<cstring>
#include<cctype>
#include<complex>
#include<iostream>
#include<sstream>
#include<algorithm>
#include<functional>
#include<vector>
#include<string>
#include<stack>
#include<queue>
#include<map>

using namespace std;
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
#define INF 1e+8
#define rep(i,j) for(int i = 0; i < (j); i++)
#define reps(i,j,k) for(int i = j; i < k; i++)
typedef long long ll;
typedef unsigned long long ull;

int main(){
	int n;
	while(scanf("%d",&n),n){
		int D[16][16] = {{0}};
		rep(i,16){
			rep(j,16){
				if(i != j)D[i][j] = INF;
			}
		}
		int v = 0;
		rep(i,n){
			int from,to,cost;
			scanf("%d%d%d",&from,&to,&cost);
			D[from][to] = cost;
			D[to][from] = cost;
			v = max(v,max(from,to));
		}
		v++;
		rep(k,v){
			rep(i,v){
				rep(j,v){
					D[i][j] = min(D[i][j],D[i][k]+D[k][j]);
				}
			}
		}
		int sum = INF,town = 0;
		rep(i,v){
			int tmp = 0;
			rep(j,v){
				if(D[i][j] == INF)tmp += 0;
				else tmp += D[i][j];
			}
			if(sum > tmp && tmp != 0){
				sum = tmp;
				town = i;
			}
		}
		printf("%d %d\n",town,sum);
	}
	return 0;
}