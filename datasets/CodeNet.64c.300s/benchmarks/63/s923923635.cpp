#include <cstdio>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <string>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <sstream>
using namespace std;

#define PQ priority_queue
#define P pair<int,int>
#define CLA(array) memset(array,0,sizeof array)
#define CLINF(array) memset(array,0x3f,sizeof array)
#define CLF(array) memset(array,-1,sizeof array)
#define DB(a) cout << "DEBUG " << a << endl;
typedef long long LL;
const int MAXN = 100000 + 50;
const int INF = 1 << 30;
LL gcd(LL a,LL b){
	if(a < b) swap(a,b);
	return b == 0 ? a : gcd(b,a % b);
}

int main(){
    //ios_base::sync_with_stdio(false);
	LL n,m;
	while(~scanf("%lld%lld",&n,&m)){
		LL ans = gcd(n,m);
		printf("%lld %lld\n",ans,n / ans * m);
	}


    return 0;
}