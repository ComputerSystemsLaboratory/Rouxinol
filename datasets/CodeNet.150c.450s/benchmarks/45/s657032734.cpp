#include <bits/stdc++.h>
using namespace std;

class combination
{
public:

	//N????????§?????????????????°??£??\??????
	combination( long long int combinationThreshold = 1e7 ) {
		(*this).combinationThreshold = combinationThreshold;
	}

	//a^p % mod
	long long int powmod( long long int A, long long int P, long long int M = LLONG_MAX ) {
		long long int ans = 1;
		long long int mul = A;
		for( ; P > 0; P >>= 1, mul = (mul*mul) % M ) {
			if( (P & 1) == 1 ) ans = (ans*mul) % M;
		}
		return ans;
	}

	//nCk mod m
	long long int cb( long long int N, long long int K, long long int M = LLONG_MAX ) {
		if( N < combinationThreshold ) {// ???????¨????O(N)??????????????????O(1)
			if( inv.size() == 0 ) {
				inv = vector<long long int>( combinationThreshold );
				inv[1] = 1;
				for( long long int i = 2; i < combinationThreshold; i++ ) {
					inv[i] = M - (M / i)*inv[M%i] % M;
				}
				fact = vector<long long int>( combinationThreshold );
				fact[0] = 1;
				revFact = vector<long long int>
					( combinationThreshold );
				revFact[0] = 1;
				for( long long int i = 1; i < combinationThreshold; i++ ) {
					fact[i] = (fact[i - 1] * i) % M;
					revFact[i] = (revFact[i - 1] * inv[i]) % M;
				}
			}
			return (((fact[N] * revFact[K]) % M)*revFact[N - K]) % M;
		} else {
			return cbOnce( N, K, M );
		}
	}

	//???????????????????????? O(K + log(M))
	long long int cbOnce( long long int N, long long int K, long long int M = LLONG_MAX ) {
		if( K > N / 2 ) return cb( N, N - K, M );
		long long int ans = 1;
		long long int div = 1;
		for( long long int i = 0; i < K; i++ ) {
			ans *= N - i;
			ans %= M;
			div *= i + 1;
			div %= M;
		}
		ans *= powmod( div, M - 2, M );
		return ans%M;
	}

private:
	vector<vector<long long int>>C;//3000??\????????????
	vector<long long int>fact;//??????
	vector<long long int>revFact;//???????????????
	vector<long long int>inv;//mod p??§?????????

	long long int combinationThreshold;//N????????§?????????????????°??\?????????
};

int main() {
	combination cb;
	long long int m, n;
	cin >> m >> n;
	cout << cb.powmod( m, n, 1000000007LL ) << endl;
}