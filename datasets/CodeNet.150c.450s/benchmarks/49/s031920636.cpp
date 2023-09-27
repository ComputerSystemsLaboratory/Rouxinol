#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
#define rep(i, n) for(int i=0; i<(n); ++i)

int main(void){
    int n, tmp;
    int ans = 0;
    while(cin >> n && n) {
        vector<int> in;
        rep(i, n) {
            cin >> tmp;
            in.push_back(tmp);
        }
        sort(in.begin(), in.end());
        ans = 0;
        for(int i=1; i<n-1; ++i) ans += in[i];
        cout << ans/(n-2) << endl;
    }
}