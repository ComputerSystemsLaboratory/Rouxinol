#include <bits/stdc++.h>
using namespace std;

int main() {
        int m, nmin, nmax;
        while( cin >> m >> nmin >> nmax, m || nmin || nmax ) {
                vector<int>P( m );
                for( size_t i = 0; i < m; i++ ) {
                        cin >> P[i];
                }
                int ans = 0;
                int sub = 0;
                for( size_t i = nmin; i <= nmax; i++ ) {
                        if( sub <= P[i - 1] - P[i] ) {
                                sub = P[i - 1] - P[i];
                                ans = i;
                        }
                }
                cout << ans << endl;
        }
}