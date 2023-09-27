#include <iostream>
#include <vector>
using namespace std;

int solve(int n, int m, int p) {
    int a[n];
    int ret = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        ret += 100*a[i];
    }
    if (a[m-1]) ret = ret * (100-p)/100 / a[m-1];
    else ret = 0;
    return ret;
}

int main(void){
    int n, m, p;
    vector<int> ans;
    while (1) {
        cin >> n >> m >> p;
        if (!n && !m && !p) break;
        ans.push_back(solve(n, m, p));
    }
    for (auto &i: ans) {
        cout << i << endl;
    }
}

