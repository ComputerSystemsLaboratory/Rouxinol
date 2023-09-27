#include<map>
#include<set>
#include<list>
#include<limits>
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
#define repi(i,a,b) for(int i = (a); i < (b); i++)

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
ll bit[100010];
int n;
int k;
ll sum(int i){
	ll s = 0;
	while(i > 0){
		s +=bit[i];
		i -=i&-i;
	}
	return s;
}

void add(int i,int x){
	while(i <=n){
		bit[i] +=x;
		i +=i&-i;
	}
}

int main(){
	while(cin>>n>>k,n||k){
		memset(bit,0,sizeof(bit));
		for(int i = 0;i < n;i++){
			int num;
			cin>>num;
			add(i+1,num);
		}
		ll res =numeric_limits<ll>::min();
		for(int i = 1;i+k-1<=n;i++){
			res =max(sum(i+k-1)-sum(i-1),res);
		}
		cout <<res<<endl;
	}
	return 0;
}