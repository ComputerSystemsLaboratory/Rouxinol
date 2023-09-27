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
	int n;
	long long m;
	long long ans=0;
	int d[10005],p[10005];
	int c[15];
	while(true){
		cin>>n>>m;
		if(n+m==0) return 0;
		else{
			for(int i=0;i<15;i++){
				c[i]=0;
			}
			ans=0;
			for(int i=0;i<n;i++){
				cin>>d[i]>>p[i];
				c[p[i]] += d[i];
				ans += d[i]*p[i];
			}
			for(int i=10;i>0;i--){
				if(m-c[i]<=0){
					ans -= m*i;
					break;
				}
				else{
					ans -= c[i]*i;
					m -= c[i];
				}
			}
		}
		cout<<ans<<endl;

	}
}