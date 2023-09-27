#include<cstdio>
#include<cmath>
#include<vector>
using namespace std;

int main() {
	vector<int> nPrimes;
	vector<bool> isPrime;
	vector<int> inputs;
	int maxN, sqrtMax, n;

	maxN = 0;
	while(scanf("%d", &n) != EOF) {
		if(n > maxN)	maxN = n;
		inputs.push_back(n);
	}

	sqrtMax = sqrt(maxN-1) + 1;

	isPrime.resize(maxN, true);
	nPrimes.resize(maxN, 0);

	isPrime[0] = false;

	for(int i=2; i<=sqrtMax; ++i) {
		if(isPrime[i-1] == false)	continue;
		for(int j=2*i; j<=maxN; j+=i) {
			isPrime[j-1] = false;
		}
	}
	for(int i=1; i<maxN; ++i) {
		if(isPrime[i])	nPrimes[i] = nPrimes[i-1] + 1;
		else	nPrimes[i] = nPrimes[i-1];
	}

	for(auto it=inputs.begin(); it!=inputs.end(); ++it) {
		printf("%d\n", nPrimes[(*it)-1]);
	}
}