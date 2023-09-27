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
	int n,a,b,c,x;
	long long ans=0;
	bool f=false;
	while(true){
		cin>>n>>a>>b>>c>>x;
		if(n+a+b+c+x==0) return 0;
		vi y(n);
		for(int i=0;i<n;i++){
			cin>>y[i];
		}
		for(int i=0;i<n;i++){
			while(true){
				//cout<<x<<" "<<y[i]<<" "<<ans<<endl;;
				if(y[i]==x){
					if(i!=n-1){
						ans++;
						x = (a*x+b)%c;
					}
					break;
				}
				ans++;
				x = (a*x+b)%c;
				if(ans>10000){
					cout<<-1<<endl;
					f=true;
					break;
				}

			}
			if(f) break;
		}
		if(!f){
			cout<<ans<<endl;
		}
		ans=0;
		f=false;
	}
}