#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>

using namespace std;

#define whole(xs) (xs).begin(),(xs).end()

// Longest Increasing Subsequence
int LIS(vector<int>& xs) {
    vector<int> L(xs.size(), INT_MAX);
    for (int i = 0; i < xs.size(); i++) {
        (*lower_bound(whole(L), xs[i])) = xs[i];
    }
    return lower_bound(whole(L), INT_MAX) - L.begin();
}

int N;
vector<int> A;
int main() {
    cin >> N;
    A.resize(N);
    for (int i = 0; i < N; i++) cin >> A[i];
    cout << LIS(A) << endl;
    return 0;
}