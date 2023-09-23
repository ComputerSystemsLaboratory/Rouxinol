#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <ctime>
#include <cstdlib>
#include <map>
#include <set>
#include <stack>
#include <queue>
 
using namespace std;
 
#define pb(n)	push_back(n)
#define mp(n,m) make_pair(n,m)
#define fi 	first
#define se 	second
#define all(r) (r).begin(),(r).end()
 
#define REP(i,s,e)	for(int i=(s); i<(e); i++)
#define rep(i,n)	REP(i,0,n)
#define REPE(i,s,e)	for(int i=s; i>e; i--)
#define repe(i,n)	REPE(i,n,-1)


typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
 
typedef vector<vi> vvi;
 
const int IMAX=((1<<30)-1)*2+1;
const int INF=100000000;
const double EPS=1e-10;
//int mod=1000000007
 

const int MAX_V = 100;

int d[MAX_V][MAX_V];
int V;
 
void warshall_floyd_init(){
	for(int i = 0; i < V; i++){
		for(int j = 0; j < V; j++){
			if(i == j) d[i][i] = 0;
			else d[i][j] = INF;
		}
	}
}

void warshall_floyd() {
	for (int k = 0; k < V; k++) {
		for (int i = 0; i < V; i++) {
			for (int j = 0; j < V; j++) {
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);
			}
		}
	}
}


int main(){
	int n;
	while(cin >> n && n > 0){
		V = 10;
		int a, b, c;
		warshall_floyd_init();
		V = 0;
		rep(i, n){
			cin>>a>>b>>c;
			d[a][b] = d[b][a] = c;
			if(V < a + 1) V = a + 1;
			if(V < b + 1) V = b + 1;
		}
		//cout<<V<<endl;
		warshall_floyd();
		int ans = INF, no =0;
		for(int i = 0; i < V; i++){
			int sum = 0;
			for(int j = 0; j < V; j++){
				sum += d[i][j];
			}
			//cout<<sum<<endl;
			if(sum < ans) ans = sum, no = i;
		}
		cout<<no<<" "<<ans<<endl;
	}
}