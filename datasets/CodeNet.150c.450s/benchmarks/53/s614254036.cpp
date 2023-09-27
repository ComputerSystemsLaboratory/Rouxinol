#include <cstdio>
#include <vector>
#include <algorithm>

using namespace std;

vector<long long> factorize(long long n) {
    vector<long long> factors;

    for (long long i=2; i*i<=n; ++i)
        while (n % i == 0) {
            factors.push_back(i);
            n /= i;
        }

    if (n > 1)
        factors.push_back(n);

    sort(factors.begin(), factors.end());
    return factors;
}

int main() {
    long long n;
    scanf("%lld", &n);

    vector<long long> factors=factorize(n);

    printf("%lld: ", n);
    for (size_t i=0; i<factors.size(); ++i)
        printf("%lld%c", factors[i], i<factors.size()-1? ' ':'\n');

    return 0;
}