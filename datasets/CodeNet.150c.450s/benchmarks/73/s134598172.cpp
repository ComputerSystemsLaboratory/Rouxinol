#include<map>
#include<set>
#include<list>
#include<cmath>
#include<queue>
#include<stack>
#include<cstdio>
#include<string>
#include<vector>
#include<complex>
#include<cstdlib>
#include<cstring>
#include<numeric>
#include<sstream>
#include<iostream>
#include<algorithm>
#include<functional>

#define mp       make_pair
#define pb       push_back
#define all(x)   (x).begin(),(x).end()
#define rep(i,n) for(int i=0;i<(n);i++)
#define REP(i,b,n) for(int i=b;i<n;i++)

using namespace std;

typedef    long long          ll;
typedef    unsigned long long ull;
typedef    vector<bool>       vb;
typedef    vector<int>        vi;
typedef    vector<vb>         vvb;
typedef    vector<vi>         vvi;
typedef    pair<int,int>      pii;

const int INF=1<<29;
const double EPS=1e-9;

const int dx[]={1,0,-1,0},dy[]={0,-1,0,1};
/*Binary-indexed-Tree*/
const int MAX_N = 100000;
//i????????????????????即???a1+a2+a3+?????????ai????即??????????
//i??即x????????????????????即???ai+=x??即?????????
//1-indexed
//[l,n]
ll bit[MAX_N+1],n;

int sum(int i){
	int s = 0;
	while(i > 0){
		s +=bit[i];
		i -= i&-i;

	}
	return s;
}

void add(int i,int x){
	while(i <=n){
		bit[i] +=x;
		i += i&-i;
	}
}


int main(){
	int q;
	cin>>n>>q;
	REP(i,1,n){
		add(i,0);
	}
	rep(i,q){
		int com,x,y;
		cin>>com>>x>>y;
		if(com==0){
			add(x,y);
		}else{
			int ans = sum(y)-sum(x-1);
			cout <<ans<<endl;
		}
	}
	return 0;
}