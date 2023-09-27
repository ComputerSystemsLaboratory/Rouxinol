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
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int i = x; i < n; i++)
#define rep(i,n) REP(i,0,n)
#define F(i,j,k) fill(i[0],i[0]+j*j,k)
#define P(p) cout<<(p)<<endl;
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define INF 1<<25
#define pb push_back
using namespace std; 
typedef vector<int> vi;
typedef vector<long long> vl;
typedef vector<double> vd;
typedef pair<int,int> pii;
typedef pair<long,long> pll;
typedef long long ll;



int main(){
	int n,m;
	cin >> n >> m;
	int V[n+1],W[n+1];
	int T[n+1][m+1];
	for(int i = 1;i <= n;i++){
		cin >> V[i] >> W[i];
	}
	for(int i = 0;i <= m;i++){
		T[0][i] = 0;
	}
	for(int i = 0;i <= n;i++){
		T[i][0] = 0;
	}
	for(int i = 1;i <= n;i++){
		for(int j = 1;j <= m;j++){
			if(W[i] <= j){
				if(V[i] + T[i-1][j-W[i]] > T[i-1][j]){
					T[i][j] = V[i] + T[i-1][j-W[i]];
				}else{
					T[i][j] = T[i-1][j];
				}
			}else{
				T[i][j] = T[i-1][j];
			}
		}
	}
	int max = -1;
	for(int i = 0;i <= n;i++){
		for(int j = 0;j <= m;j++){
			if(T[i][j] > max) max = T[i][j];
		}
	}
	P(max);
	return 0;
}