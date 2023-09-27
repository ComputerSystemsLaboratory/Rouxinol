#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <numeric>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <utility>
#include <sstream>
#include <complex>

using namespace std;

#define FOR(i,a,b) for(long long i=(a);i<(b);i++)
#define REP(i,N) for(long long i=0;i<(N);i++)
#define ALL(s) (s).begin(),(s).end()
#define fi first
#define se second

#define PI acos(-1.0)
#define INF 1000000007
#define EPS 1e-10

typedef long long ll;
typedef pair<ll, ll> P;
typedef pair<double, double> PD;
typedef pair<string, ll> PS;
typedef vector<ll> V;
typedef pair<P, char> PC;

int a, d, n;
int is_prime[1000010];

int main(){
	fill(is_prime, is_prime + 1000010, 1);
	is_prime[0] = is_prime[1] = 0;
	for (int i = 2; i*i <= 1000000; i++){
		if(is_prime[i]){
			for (int j = i * 2; j <= 1000000; j += i){
				is_prime[j] = 0;
			}
		}
	}
	while (cin >> a >> d >> n&&a + d + n){
		int co = 0;
		while (n > 0){
			if (is_prime[a + co*d]){
				n--;
				if (n == 0)cout << a + co*d << endl;
			}
			co++;
		}
	}
}