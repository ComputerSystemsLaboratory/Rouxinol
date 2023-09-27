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
	int x,y,s;
	int a[1005],b[1005],ans=0;
	while(true){
		cin>>x>>y>>s;
		if(x+y+s==0) return 0;
		for(int i=1;i<s;i++){
			a[i] = i;
			for(int j=1;j<s;j++){
				b[i] = j;
				if((a[i]*100+a[i]*x)/100 + (b[i]*100+x*b[i])/100 == s) break;
				if(j==s-1){
					a[i]=0;
					b[i]=0;
				}
			}
			//cout<<i<<endl;
			//cout<<a[i]<<" "<<b[i]<<endl;
		}
		for(int i=1;i<s;i++){
			ans=max(ans,(a[i]*100+a[i]*y)/100+(b[i]*100+y*b[i])/100);		
		}
		cout<<ans<<endl;
		ans=0;
	}
}