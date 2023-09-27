#include <bits/stdc++.h>
using namespace std;
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }

int n;
int main() {
    cin >> n;
    int ansn = n;
    vector<int> ans;
    int limit = sqrt(n);
    for(int i = 2; i < limit+1; ++i) {
        if(n == 1) break;
        while(n % i == 0) {
            ans.push_back(i);
            n /= i;
        }
    }
    if(n != 1) ans.push_back(n);

    cout << ansn << ": ";
    for(int i = 0; i < ans.size(); ++i) {
        if(i == ans.size()-1) cout << ans.at(i) << endl;
        else cout << ans.at(i) << " ";
    }
}
