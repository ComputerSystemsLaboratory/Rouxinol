#include <map>
#include <set>
#include <list>
#include <cmath>
#include <queue>
#include <stack>
#include <cstdio>
#include <string>
#include <vector>
#include <complex>
#include <cstdlib>
#include <cstring>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define repi(i,a,b) for(int i = (a); i < (b); i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
int n;
int d[120][120];
int main(){
	cin>>n;
	for(int i =0;i < n;i++){
		int u,k;
		cin>>u>>k;
		for(int j =0;j <k;j++){
			int c;
			cin>>c;
			d[u][c]=1;
		}
	}
	for(int i =1;i <=n;i++){
		for(int j =1;j <=n;j++){
			if(j==1)cout <<d[i][j];
			else cout <<" "<<d[i][j];
		}
		cout <<endl;
	}
	return 0;
}