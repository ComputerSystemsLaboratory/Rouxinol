#include <iostream>
#include <cstring>
using namespace std;

int main( void )
{
    int n, p;
    while ( cin >> n >> p && n && p ) {
        int C = p;
        int P[51];
        memset( P, 0, sizeof(P) );
        int ind = 0;
        int answer;
        for ( int s = 0; s < 1000000; s++ ) {
            if ( C > 0 ) {
                P[ind]++;
                C--;
                if ( P[ind] == p ) {
                    answer = ind;
                    break;
                }
            } else {
                C += P[ind];
                P[ind] = 0;
            }
            ind = ( ind + 1 ) % n;
        }
        cout << answer << endl;
    }
    return 0;
}