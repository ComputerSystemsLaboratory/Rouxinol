#define _USE_MATH_DEFINES
#define INF 100000000
#include <iostream>
#include <sstream>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <queue>
#include <stack>
#include <limits>
#include <map>
#include <string>
#include <cstring>
#include <set>
#include <deque>
#include <bitset>
#include <list>

using namespace std;

typedef long long ll;
typedef pair <int,int> P;

static const double eps = 1e-8;

int stage[16][16];
ll bit[100001];

ll sumBIT(int i,ll* bit){
	ll s = 0;
	while(i > 0){
		s += bit[i];
		i -= i & -i;
	}
	return s;
}

void addBIT(int i, int x,ll* bit,int n){
	while(i <= n){
		bit[i] += x;
		i += i & -i;
	}	
}


int main(){
	int n,k;
	while(~scanf("%d %d",&n,&k)){
		if(n==k && k==0) break;
		memset(bit,0,sizeof(bit));
		for(int i=0;i<n;i++){
			int num;
			scanf("%d",&num);
			addBIT(i+1,num,bit,100000);
		}

		ll res = numeric_limits<ll>::min();
		for(int i=1;i+k-1<=n;i++){
			res = max(sumBIT(i+k-1,bit) - sumBIT(i-1,bit),res);
		}

		printf("%lld\n",res);
	}
}