#include <cstdio>
#include <iostream>
using ll=long long;
#define rep(i,a,b) for(ll i=a;i<ll(b);i++)
#define repr(i,a,b) for(ll i=a;i>=ll(b);i--)
#define endl "\n"
#define ALL(x) x.begin(),x.end()
#define ALLR(x) x.rbegin(),x.rend()
using namespace std;

int N, Q, p[100010], b[100010], c[100010];
ll sum;
int main() {
	scanf("%d", &N);
	rep(i, 0, N) {
		int tmp; scanf("%d", &tmp);
		p[tmp]++;
		sum += tmp;
	}
	scanf("%d", &Q);
	rep(i, 0, Q) scanf("%d%d", &b[i], &c[i]);

	rep(i, 0, Q){
		int _b = b[i], _c = c[i];
		sum -= p[_b] * _b;
		sum += p[_b] * _c;
		p[_c] += p[_b];
		p[_b] = 0;
		printf("%lld\n", sum);
	}
    return 0;
}
