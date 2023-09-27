#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

bool is_prime(int n) {
    static int prime_max = 1;
    static vector<int> primes;
    if (n > prime_max) {
        for (int m=prime_max+1; m<=n; m++) {
            bool is_prime = true;
            for (vector<int>::iterator iter=primes.begin(); iter!=primes.end(); iter++) {
                if (m%(*iter) == 0) {
                    is_prime = false;
                    break;
                }
                if ((*iter)*(*iter) > m) {
                    break;
                }
            }
            if (is_prime) {
                primes.push_back(m);
            }
        }
        prime_max = n;
    }
    return binary_search(primes.begin(), primes.end(), n);
}

int main() {
    int a, d, n;
    while (true) {
        cin >> a >> d >> n;
        if (a == 0) {
            break;
        }
        int series = a;
        int count = 0;
        while (true) {
            if (is_prime(series)) {
                count++;
            }
            if (count == n) {
                break;
            }
            series += d;
        }
        cout << series << endl;
    }
    return 0;
}