// g++ -std=c++11 temp.cpp
#include <bits/stdc++.h>
using namespace std;

#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);i++)
#define REP(i,n) FOR(i,0,n)
#define EACH(itr,v) for(auto itr:v)
#define pb(s) push_back(s)
#define mp(a,b) make_pair(a,b)
#define all(x) (x).begin(),(x).end()
#define dbg(x) cout<<#x"="<<x<<endl

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> P;
typedef pair<P, int> PPI;

#define INF INT_MAX/3

#define MAX_N 1000

int n;
bool is_prime[1000000];

int main(){
	while(scanf("%d", &n)!=EOF){
		for(int i = 0; i <= n; i++) is_prime[i]=true;
		int res = 0;
		for(int i = 2; i <= n; i++){
			if(is_prime[i]){
				res++;
				for(int j = 2*i; j <= n; j+=i) is_prime[j]=false;
			}
		}
		cout<<res<<endl;
	}
	return 0;
}