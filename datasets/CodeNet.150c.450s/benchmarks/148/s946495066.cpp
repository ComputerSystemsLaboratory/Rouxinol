#include <bits/stdc++.h>

using namespace std;


int main() {
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    
    int n;
    cin >> n;
    vector <string> v ={"AC", "WA", "TLE", "RE"};
    vector <int> cnt(4);
    while(n--){
        string s;
        cin >> s;
        for (int i = 0; i < 4; ++i) {
            if(v[i] == s)
                cnt[i]++;
        }
    }
    for(int i = 0; i < 4; ++i){
        cout << v[i] << " x " << cnt[i] << "\n";
    }
}