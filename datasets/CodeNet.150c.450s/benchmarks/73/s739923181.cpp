#include <iostream>
#include <algorithm>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <cmath>
#include <string>
#include <cstring>
#include <sstream>
#include <iomanip>//小数精度 	cout << fixed << setprecision(5) << tmp << endl;
using namespace std;

#define ll long long
#define vvi vector< vector<int> >
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) for(int i=0;i<(int)(n);i++)
#define All(X)      (X).begin(),(X).end()
const ll int INF =1000000001;

int n,q;
int bit[100010]={0};

void add(int i,int x){
	while(i<=n){
		bit[i] += x;
		i += i& -i;
	}
}

ll int getsum(ll int i){
	ll int s = 0;
	while(i>0){
		s += bit[i];
		i -= i& -i;
	}
	return s;
}

int main(){
	cin >> n >> q;
	REP(i,q){
		ll int tmp,x,y;
		cin >> tmp >> x >> y;
		if(tmp==0){
			//add
			add(x,y);
		}else{
			//getsum
			cout << getsum(y)-getsum(x-1) << endl;
		}
	}
}