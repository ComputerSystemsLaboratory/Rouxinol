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
	int n;
	cin>>n;
	int y,m,d;
	rep(i,0,n){
		cin>>y>>m>>d;
		int days;
		if(y%3) days=195*(y-1)+5*((y-1)/3)+20*(m-1)-(m-1)/2+d;
		else days=195*(y-1)+5*((y-1)/3)+20*(m-1)+d;
		o(196471-days);
	}
}