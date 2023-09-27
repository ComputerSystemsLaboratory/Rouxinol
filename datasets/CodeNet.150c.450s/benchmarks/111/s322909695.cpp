#include <iostream>
#include <vector>
#include <map>
using namespace std;

#define MAX_N 101

typedef long long int ll;

int N;
vector<int> ns;

map<int, ll> dp[MAX_N];

ll solve(int index, int acc) {
    if (index == N) {
        if (acc == 0) return 1;
        return 0;
    }
    if (acc < 0 || acc > 20) return 0;
    if (dp[index][acc] != 0) return dp[index][acc];
    return dp[index][acc] = solve(index+1, acc+ns[index]) + solve(index+1, acc-ns[index]);
}

int main() {
    cin >> N; ns.resize(N);
    for (int i = 0; i < N; i++) cin >> ns[i];
    cout << solve(1, ns[0]) << endl;
    return 0;
}