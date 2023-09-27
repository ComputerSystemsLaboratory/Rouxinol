#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

const int inf = 1000000009;

int main() {
    vector<int> memo(1000000, inf);     memo[0] = 0;
    vector<int> odd_memo(1000000, inf); odd_memo[0] = 0;

    for (int i=0; i<1000000; i++) {
        memo[i]     = i;
        odd_memo[i] = i;
    }

    for (int l=2; l<200; l++) {
        const int n = (l*(l+1)*(l+2))/6;
        for (int i=0; i<1000000; i++) {
            if (i-n >= 0) {
                memo[i] = min(memo[i-n]+1, memo[i]);
                if (n%2==1) {
                    odd_memo[i] = min(odd_memo[i-n]+1, odd_memo[i]);
                }
            }
        }
    }

    int n; 
    while (cin >> n, n!=0) {
        cout << memo[n] << " " << odd_memo[n] << endl;
    }
}

