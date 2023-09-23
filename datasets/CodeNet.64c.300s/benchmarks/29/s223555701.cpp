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
	int e;
	while(1){
		cin>>e;
		if(e==0) break;
		int m=10000000;
		for(int i=0;i*i*i<=e;i++){
			for(int j=0;j*j<=e-i*i*i;j++){
				m=min(m,e-i*i*i-j*j+i+j);
			}
		}
		o(m);
	}
}