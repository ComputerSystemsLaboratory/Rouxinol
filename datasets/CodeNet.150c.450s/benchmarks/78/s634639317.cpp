#include <iostream>
#include <vector>
using namespace std;

int main() {
    const long long size = 1000000;
    vector<long long> memo(size, -1);
    vector<long long> odd(size, -1);
    memo[0] = 0; odd[0] = 0;

    for (int i=0; i<size; i++) {
        memo[i] = i; odd[i] = i;
    }

    for (long long i=2; i<200; i++) {
        const long long pNum = (i * (i+1) * (i+2)) / 6;
        for (long long j=0; j<size; j++) {
            if (j-pNum >= 0) {
                memo[j] = min(memo[j-pNum]+1, memo[j]);

                if (pNum % 2 == 1) {
                    odd[j] = min(odd[j-pNum]+1, odd[j]);
                }
            }
        }
    }

    long long n; while (cin >> n, n != 0) {
        cout << memo[n] << " " << odd[n] << endl;
    }

}
