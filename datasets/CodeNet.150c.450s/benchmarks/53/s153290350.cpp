#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

typedef long long ll;

template<class T>
inline bool chmax(T &a, T b) {
    if(a < b) {
        a = b;
        return true;
    }
    return false;
}

template<class T>
inline bool chmin(T &a, T b) {
    if(a > b) {
        a = b;
        return true;
    }
    return false;
}

const int MAX_N = 1000000000;
vector<bool> numbers;
vector<int> primes;
vector<int> factors;

void collect_primes(const int n) {
    numbers.resize(n, true);
    for (int i = 2; i * i <= n; i++) {
        if (numbers[i]) {
            primes.push_back(i);
            for (int j = i; j * j <= n; j += i) {
                numbers[j] = false;
            }
        }
    }
}

void factorize(const int n) {
    int x = n;
    for (int i = 0; i < (int) primes.size(); i++) {
        int prime = primes[i];
        while (x % prime == 0) {
            factors.push_back(prime);
            x /= prime;
        }
    }
    // A prime factor larger than sqrt(x) is added here.
    if (x != 1) {
        factors.push_back(x);
    }
}

// ref. http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=NTL_1_A
int main(void) {
    int n;
    cin >> n;

    collect_primes(n);

    factorize(n);
    cout << n << ": " << factors[0];
    for (int i = 1; i < (int) factors.size(); i++) {
        cout << " " << factors[i];
    }
    cout << endl;

    return 0;
}

