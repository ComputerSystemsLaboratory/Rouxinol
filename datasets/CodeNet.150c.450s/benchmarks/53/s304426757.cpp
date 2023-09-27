#include<bits/stdc++.h>
using namespace std;

#define rep(i, n) for (int i = 0; i < n; ++i)
#define all(x) (x).begin(),(x).end()

using ll = long long;
using P = pair<int,int>;

const int MOD = 1e9 + 7;
const int INF = 1001001001;

map<int, int> factor(int n){
    map<int, int> res;

    for (int i = 2; i*i <= n; ++i) {
        while(n % i == 0){
            res[i]++;
            n /= i;
        }
    }
    if(n != 1) res[n] = 1;

    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

    int n;
    cin >> n;

    map<int, int> ans = factor(n);

    cout << n << ":";
    for (auto& p : ans) {
        rep(i, p.second){
            cout << " " << p.first;
        }
    }
    cout << "\n";

    return 0;
}

