#include <bits/stdc++.h>
 
using namespace std;

using usize = ::std::size_t;
using u64 = ::std::int_least64_t;
static constexpr u64 Inf = ::std::numeric_limits<u64>::max() / 2;

u64 N;

int main(int argc, char *argv[])
{
    
 
    cin.tie(0);
    ios::sync_with_stdio(false);
    
    cin >> N;
    vector<u64> a(N), M;
    for (u64 i = 0; i < N; i++) {
        cin >> a[i];
    }
    M.push_back(a[0]);
    for (auto it = a.begin() + 1; it != a.end(); it++) {
        if (*it > M.back()) {
            M.push_back(*it);
        } else {
            auto location = lower_bound(M.begin(), M.end(), *it);
            *location = *it;
        }
    }
    
    cout << M.size() << endl;
    
    return 0;
}

