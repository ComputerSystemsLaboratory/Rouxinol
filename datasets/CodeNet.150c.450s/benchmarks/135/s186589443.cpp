#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstdio>
#include <cmath>

using namespace std;

#define REP(i,k,n) for(int i=k;i<n;i++)
#define rep(i,n) for(int i=0;i<n;i++)


#define all(v) v.begin(),v.end()
#define INF 1<<30
#define mp make_pair
#define pb push_back

#define fi first
#define se second

#define each(it,c) for(auto it=(c).begin();it!=(c).end();it++)

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

typedef long long ll;
int ih[1000*1500+1500];
int iw[1000*1500+1500];
int main(){
	
	while(1){
		rep(i,1000*1500+1500){
			ih[i] = 0;
			iw[i] = 0;
		}
		int ans=0;
		int n,m;
		int h[1520];
		int w[1010];
		int maxh = 0;
		int maxw = 0;
		cin >> n >> m;
		if(n==0) break;
		rep(i,n){
			cin >> h[i];
			maxh += h[i];
		}
		rep(i,m){
			cin >> w[i];
			maxw += w[i];
		}
		int maxs = min(maxh,maxw);

		rep(s,n){
			int tsh = 0;
 			for(int e=s;e<n&&tsh<=maxs;e++){
				// cout << "s : "  << s << "e : "<<e<< endl;
				tsh += h[e];
				ih[tsh] += 1;
			}
		}
		rep(s,m){
			int tsw = 0;

 			for(int e=s;e<m&&tsw<=maxs;e++){
				
				tsw += w[e];
				iw[tsw] += 1;
			}
		}
		// rep(i,6) cout << "ih : "<<ih[i] << endl;
		// rep(i,6) cout << "iw : "<<iw[i] << endl;



		REP(i,1,maxs+1){
			ans += ih[i]*iw[i];
			// cout << i <<  "ih[i]" << ih[i] << "iw[i]" << iw[i] <<endl;
		}
		cout << ans << endl;
	}
	return 0;
}