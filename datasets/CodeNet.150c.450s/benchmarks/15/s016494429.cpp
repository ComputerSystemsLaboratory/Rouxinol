#include <bits/stdc++.h>
using namespace std;

#define FOR( i, m, n )  for( int (i) = (m); (i) < (n); (i)++ )
#define REP( i, n )     FOR( i, 0, n )
#define ALL( a )        (a).begin(), (a).end()             

int main(void){
    int n; cin >> n;
    vector<int> s(n);
    REP( i, n ) cin >> s[i];
    
    int q, sum = 0; cin >> q;
    int key;
    REP( i, q ){
        cin >> key;
        int j = 0;
        while( j != n ){
            if( key == s[j] ){
                sum++;
                break;
            }
            j++;
        }
    }
    
    cout << sum << endl;
}
