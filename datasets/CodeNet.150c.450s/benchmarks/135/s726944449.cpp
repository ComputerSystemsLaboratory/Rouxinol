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

long long hsum2[1500005],wsum2[1500005];

int main() {
	int n,m;
	long long ans=0;
	int h[1505],w[1505];
	long long hsum1[1505],wsum1[1505];
	while(true){
		cin>>n>>m;
		if(n+m==0) return 0;
		else{
			for(int i=0;i<1505;i++){
				hsum1[i]=0;
				wsum1[i]=0;
			}
			fill(hsum2,hsum2+1500005,0);
			fill(wsum2,wsum2+1500005,0);

			for(int i=0;i<n;i++){
				cin>>h[i];
				if(i==0){
					hsum1[i]+= h[i];
				}
				else{
					hsum1[i]=hsum1[i-1]+h[i];
				}
			}
			for(int i=0;i<m;i++){
				cin>>w[i];
				if(i==0){
					wsum1[i]+= w[i];
				}
				else{
					wsum1[i]+=wsum1[i-1]+w[i];
				}
			}
			for(int i=0;i<n;i++){
				hsum2[hsum1[i]]++;
				for(int j=i+1;j<n;j++){
					hsum2[hsum1[j]-hsum1[i]]++;
				}
			}

			for(int i=0;i<m;i++){
				wsum2[wsum1[i]]++;
				for(int j=i+1;j<m;j++){
					wsum2[wsum1[j]-wsum1[i]]++;
				}
			}
		}
		for(int i=0;i<1500005;i++){
			ans += hsum2[i]*wsum2[i];
		}
		cout<<ans<<endl;
		ans=0;
	}
}