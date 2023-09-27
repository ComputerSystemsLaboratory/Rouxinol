#include <iostream>
using namespace std;

const int N = 10005;
const int Q = 505;
int S[N];
int T[Q];

int main() {
    int n, q;
    cin >> n;
    for ( int i = 0; i < n; i++ ) {
        cin >> S[i];
    }
    cin >> q;
    for ( int i = 0; i < q; i++ ) {
        cin >> T[i];
    }
    
    int C = 0;
    for ( int i = 0; i < q; i++ ) {
        S[n] = T[i];
        int j = 0;
        while ( S[j] != S[n] ) {
            j++;
        } 
        if ( j != n ) {
            C++;
        }
    }
    
    cout << C << endl;
    
    return 0;
}