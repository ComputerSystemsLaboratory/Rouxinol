#include <bits/stdc++.h>
using namespace std;

#define FOR(i,l,r) for(int i = (l);i < (r);i++)
#define ALL(x) (x).begin(),(x).end()
template<typename T> bool chmax(T& a,const T& b){return a < b ? (a = b,true) : false;}
template<typename T> bool chmin(T& a,const T& b){return b < a ? (a = b,true) : false;}
typedef long long ll;

int N;
const int MAX_N = 1e6;

vector<int> fprime()
{
	deque<bool> is_prime(MAX_N,true);
	vector<int> res;
	FOR(i,2,MAX_N) if(is_prime [i]){
		res.push_back(i);
		for(int j = i * 2;j < MAX_N;j += i){
			is_prime [j] = false;
		}
	}
	return res;
}

int main()
{
	vector<int> primes = fprime();
	while(~scanf("%d",&N)){
		int ans = upper_bound(ALL(primes),N) - primes.begin();
		printf("%d\n",ans);
	}

	return 0;
}