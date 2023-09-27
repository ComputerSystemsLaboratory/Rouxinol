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
	int n;
	cin >> n;

	ll s = 100000;
	rep(i,0,n){
		s += double(s)*0.05;
		//cout << s << endl;
		if( s % 1000 ){
			s = s / 1000 * 1000 + 1000;
		}
		//cout << s << endl;
	}

	cout << s << endl;
	
	ret 0;
}
