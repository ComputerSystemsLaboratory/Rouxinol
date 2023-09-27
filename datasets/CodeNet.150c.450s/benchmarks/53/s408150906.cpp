#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int, int>;

#define     endl               "\n"
#define     fast_io            ios::sync_with_stdio(false); cin.tie(0);
#define     file_io            freopen("input.txt", "r", stdin);   \
                               freopen("output.txt", "w", stdout);
#define     all(x)             begin(x), end(x)
#define     debug(x)           cerr <<"Line "<< __LINE__ <<" : "<< #x " = "<< x <<endl;
 
template<typename T, typename TT>
ostream& operator<<(ostream &os, const pair<T, TT> &t) { return os<<"("<<t.first<<", "<<t.second<<")"; }
template<typename T>
ostream& operator<<(ostream& os, const vector<T> &t) { for(auto& i: t) os<<i<<" "; return os; }




/**
 * This is an optimized (time & memory) version of Sieve of Eratosthenes 
 * 
 * input: n (range of primes to be generated), update MAXN as n
 * output: a vector of primes
 * 
 * -> discards even nonprimes during computation and memory
 * -> can be called multiple times
 * 		
 * There are appriximately (N / ln(N)) primes in range [1, N]	
 * Time complexity: O(Nlog(logN))
 * Space complexity: O(n/64 + n/ln(n))   
 * */

const unsigned int MAXN = 2e7 + 7;
bitset <MAXN> status;

///you can call it anywhere...TESTED
vector<int> sieve(const int& n) {
						    
    status.reset(); 	///clear bitset if necessary
    vector<int> primes;	/// stores generated primes
    
    if(n > 1) primes.emplace_back(2);
    
    int i = 3;
    for( ; i * i <= n; i += 2) {
		if(!status[i >> 1]) {	
            primes.emplace_back(i); 
            for(int j = i * i; j <= n; j += i + i) status[j >> 1] = 1;
        } 
	}
           
    for(; i <= n; i += 2) if(!status[i >> 1]) primes.emplace_back(i); 

    return primes;
}


/**
 * After a sieve call for a particular range
 * isPrime(x) returns true if x is a prime number in given range
 * 
 * -> First call sieve(n)
 * -> Then call it
 * 
 * Complexity: O(1)
 */


///you must call sieve() once before calling it...TESTED
bool isPrime(const int& n) {
	return n == 2 || (n > 2 && (n&1) && !status[n >> 1]); 
}




/**
 * Returs base to the power exponent
 * 
 * Complexity: log2(exponent)
 * */
ll bigPow(ll base, ll exponent) {
	ll res = 1LL; 
	while(exponent) { 
		if(exponent & 1LL) res *= base;
		exponent >>= 1LL, base *= base; 
	}
	return res;
}



/**
 * Required functions: vector<int> sieve(const int& n), ll bigPow(ll base, ll exponent)
 * Sample call: auto t = primeFactorize(n, seive(sqrt(n)));
 * 
 * Input: n (a number to be prime factorized), a vector of primes <= sqrt(n)
 * Output: {vector of all {factors, counts}, sum of factors, number of factors}
 * 
 * Complexity: O(sieve_call + inner) = O(sqrt(n) + sqrt(n)/ln(sqrt(n))) +  lg(n)) = O(sqrt(n)) 
 * */
 
 ///TESTED
tuple< vector<pair<ll, ll>>, ll, ll > primeFactorize(ll n, vector<int> const& rooted_primes) {
	vector<pair<ll, ll>> factors_with_count;
	ll factor_sum = 1LL, num_factor = 1LL; ///SoF, NoF

	/*	
	if(isPrime(n)) { //iff seive(n) can be called...
		factors_with_count = {{1, 1}, {n, 1}};
		factor_sum += n, ++num_factor;
		return make_tuple(factors_with_count, factor_sum, num_factor);
	} 
	*/
	
	for(const int& prime : rooted_primes) {
		if(prime * 1LL * prime <= n && !(n % prime)) {
			ll pc = 0;
			while(!(n % prime)) { n /= prime, ++pc; }
			factors_with_count.emplace_back(prime, pc);
			
			factor_sum *= (bigPow(prime, pc + 1LL) - 1LL) / (prime - 1LL); 
			num_factor *= (pc + 1LL);  
		}
	}
	/// remaining > 1 means a prime factor
	if(n > 1LL) {
	   factors_with_count.emplace_back(n, 1LL);
	   
	   factor_sum *= (bigPow(n, 2LL) - 1LL) / (n - 1LL); 
	   num_factor *= 2LL; 
	}
	
	return make_tuple(factors_with_count, factor_sum, num_factor);
}



int main(int argc, char** argv) {
    fast_io
   
	int n;
	cin >> n;
	auto vec = get<0>(primeFactorize(n, sieve(sqrt(n + 1))));
	
    cout << n << ":";
    for(auto item : vec) {
		while(item.second--) cout << " " << item.first;
	}   
    cout << endl;

    return 0;
}

