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
#include <iomanip>
#define fi first
#define se second
#define fcout(n) cout<<fixed<<setprecision((n))
#define cinl(str) getline(cin,(str))
using namespace std;
bool value(int y,int x,int R,int C){return 0<=y&&y<R&&0<=x&&x<C;}
typedef pair<int,int> pii;
typedef long long ll;
typedef vector<int> vi;
typedef vector<long long > vll;
typedef vector< vi > vvi;
double pie=acos(-1);
int INF=1000000007;
int dx[4] = { 0,-1,0,1 };
int dy[4] = { -1,0,1,0 };


int main() {
	int n,s,m,M,ans;
	while(true){
		cin>>n;
		if(n==0){
			return 0;
		}
		m = 1005;
		M= -1;
		ans=0;
		for(int i=0;i<n;i++){
			cin>>s;
			m=min(m,s);
			M=max(M,s);
			ans+=s;
		}
		n-=2;
		ans=ans-M-m;
		ans /= n;
		cout<<ans<<endl;
	}
}