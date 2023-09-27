/**
 *   @FileName	b.cpp
 *   @Author	kanpurin
 *   @Created	2020.06.28 21:36:12
**/

#include "bits/stdc++.h" 
using namespace std; 
typedef long long ll;

int main() {
    int d;
    cin >> d;
    vector< int > c(26);
    for (int i = 0; i < 26; i++) {
        cin >> c[i];
    }
    vector< vector< int > > s(d, vector< int >(26));
    for (int i = 0; i < d; i++) {
        for (int j = 0; j < 26; j++) {
            cin >> s[i][j];
        }
    }
    vector<int> t(d);
    for (int i = 0; i < d; i++) {
        cin >> t[i];
        t[i]--;
    }
    vector< int > las(26,0);
    ll total = 0;
    for (int i = 0; i < d; i++) {
        total += s[i][t[i]];
        las[t[i]] = i + 1;
        
        for (int j = 0; j < 26; j++) {
            total -= c[j] * (i + 1 - las[j]);
        }
        cout << total << endl;
    }
    return 0;
}
