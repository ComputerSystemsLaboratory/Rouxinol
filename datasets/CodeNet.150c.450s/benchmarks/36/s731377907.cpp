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
	int d;
	while(cin>>d){
		int S=0;
		for(int i=1;i*d<=600-d;i++){
			int x=i*d;
			x=x*x;
			x*=d;
			S+=x;
		}
		cout<<S<<endl;
		S=0;
	}
}