#include<iostream>
#include<iomanip>
#include<map>
#include<set>
#include<string>
#include<algorithm>
#include<cmath>
#include<vector>
#include<queue>
#include<stack>
#include<cstring>
#include<sstream>
using namespace std;
 
#define P(p) cout<<(p)<<endl
#define rep(i,m,n) for(int i = (m); i < (int)(n); i++)
#define rrep(i,m,n) for(int i=(int)(m); i>=(int)(n); i--)
#define vsort(v) sort(v.begin(), v.end());
#define rvsort(v) sort(v.begin(), v.end(),greater<int>());
#define YES cout<<"YES"<< endl
#define NO cout<<"NO"<<endl
#define Yes cout<<"Yes"<<endl
#define No cout<<"No"<<endl  
#define yes cout<<"yes"<<endl
#define no cout<<"no"<<endl
#define ret return
#define lb(v,n) lower_bound(v.begin(),v.end(),n)
#define ub(v,n) upper_bound(v.begin(),v.end(),n)
#define mae(v) max_element(v.begin(),v.end())
#define mie(v) min_element(v.begin(),v.end())
#define INF 0x7FFFFFFF
#define mod 1000000007
typedef long long ll;
////////////////////////////////////////////////////////////

int main(){
	int w,n;
	cin >> w >> n;
	vector<pair<int,int>> v;
	rep(i,0,n){
		int a,b;
		scanf("%d,%d",&a,&b);
		a--;
		b--;
		v.push_back(pair<int,int> (a,b));
	}
	
	int ans[w];

	rep(i,0,w){
		int now = i;
	
		rep(j,0,n){
			//cout << now << " " << v[j].first << " " << v[j].second << endl;
			if( v[j].first == now )
				now = v[j].second;
			else if( v[j].second == now)
				now = v[j].first;
		}
		
		ans[now] = i+1;
		
		//cout << "now:" <<  now+1 << endl;
	}
	
	rep(i,0,w)
		cout << ans[i] << endl;

	ret 0;
}
