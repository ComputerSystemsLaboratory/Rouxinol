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
	int n,m,p;
	int x[105];
	long long ans=0;
	while(true){
		cin>>n>>m>>p;
		if(n+m+p==0) return 0;
		ans=0;
		//cout<<ans<<" "<<n<<" "<<m<<" "<<" "<<p<<endl;
		for(int i=0;i<n;i++){
			cin>>x[i];
			ans+=x[i]*100;
		}
		for(int i=0;i<n;i++){
			if(i+1==m){
				if(x[i]!=0){
					ans=ans/100;
					ans=ans*(100-p);
					ans=ans/x[i];
					break;
				}
				else{
					ans=0;
					break;
				}
			}
		}
		cout<<ans<<endl;


	}
}