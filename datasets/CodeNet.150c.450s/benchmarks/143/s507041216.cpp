#include <bits/stdc++.h>

using namespace std;

using LL = long long;

void solver() {
    int n; cin >> n;
    vector<int>a(n);
    
    map<int,int> freq;

    LL total = 0;

    for(int&x : a) {
        cin >> x;
        freq[x]++;
        total += x;
    }

    int q; cin >> q;

    while(q--) {
        int b, c; cin >> b >> c;
        int seen = freq[b];
        
        total -= seen * 1LL * b;
        freq[b] = 0;

        total += seen *1LL * c;
        freq[c] += seen;

        cout << total << '\n';
    }
}

int main() {

    ios_base :: sync_with_stdio(0); cin.tie(NULL);

    int t = 1;
    //cin >> t;
    
    while(t--)
        solver();

    return 0;
}