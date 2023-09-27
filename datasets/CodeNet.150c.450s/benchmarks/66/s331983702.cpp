#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include <algorithm>
#include <map>
#include <set>
#include <cstdio>
#include <cmath>
#define rep(i,l,n) for(lint i=l;i<n;i++)
#define rer(i,l,n) for(lint i=l;i<=n;i++)
#define all(a) a.begin(),a.end()
#define o(a) cout<<a<<endl
#define pb(a) push_back(a)
#define mk(a,b) make_pair(a,b)
#define fi first
#define se second
using namespace std;
typedef long long lint;
typedef vector<int> vi;
typedef vector<lint> vli;
typedef vector<vi> vvi;
typedef pair<int,int> pii;

int main(){
	int n,m,f=-1;
	cin>>n;
	vector<string> u(n);
	string t;
	rep(i,0,n) cin>>u[i];
	cin>>m;
	sort(all(u));
	rep(i,0,m){
		cin>>t;
		if(binary_search(all(u),t)){
			cout<<(f==-1?"Opened by ":"Closed by ");
			cout<<t<<endl;
			f*=-1;
		}else{
			cout<<"Unknown "<<t<<endl;
		}
	}
}