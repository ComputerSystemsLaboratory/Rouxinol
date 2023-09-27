#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cmath>
#include <functional>
#include <numeric>
#define fi first
#define se second
using namespace std;
bool value(int y,int x,int R,int C){return 0<=y&&y<R&&0<=x&&x<C;}
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
double pie=acos(-1);
int INF=10000009;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };
int main() {
	int w;
	int n;
	int y;
	char c;
	int a[35],b[35];
	int x[35];
	cin>>w>>n;
	for(int i=1;i<=w;i++) x[i]=i;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c>>b[i];
	}
	for(int i=1;i<=n;i++){
		y=x[a[i]];
		x[a[i]]=x[b[i]];
		x[b[i]]=y;
	}
	for(int i=1;i<=w;i++){
		cout<<x[i]<<endl;
	}
}