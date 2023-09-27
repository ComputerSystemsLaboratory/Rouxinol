#include <bits/stdc++.h>
using namespace std;

int Sum(vector<int>& x) {
    int ret = 0;
    for (auto i : x) ret += i;
    return ret;
}

int main() {
    vector<int> a(4), b(4);
    for (auto& i : a) cin >> i;
    for (auto& i : b) cin >> i;
    cout << max(Sum(a), Sum(b)) << endl;

    return 0;
}