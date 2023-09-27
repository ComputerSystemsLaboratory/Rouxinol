#include <iostream>
#include <cmath>
#include <algorithm>

const int N = 100;
const int W = 10000;
int table[N+1][W+1] = {}; // total "value"

struct item {
    int value;
    int weight;
} items[N+1];

const int NONE = -1;

int main() {
    using namespace std;

    int n, w;
    cin >> n >> w;
    for( int i=0; i<n; ++i ) {
        cin >> items[i+1].value >> items[i+1].weight;
    }

    // init
    for( int nn=0; nn<n; ++nn ) {
        for( int ww=0; ww<w; ++ww ) {
            table[nn][ww] = NONE;
        }
    }
    table[0][0] = 0;

    for( int i=1; i<=n; ++i ) {
        for ( int j=0; j<=w; ++j ) {
            if ( table[i-1][j] != NONE ) {
                const int prev_v = table[i-1][j];

                // if not take
                table[i][j] = max(prev_v, table[i][j]);

                // if take
                if ( j + items[i].weight <= W ) {
                    table[i][j + items[i].weight] = max(prev_v + items[i].value, table[i][j + items[i].weight]);
                }
            }
        }
    }

    cout << *max_element( table[n], table[n] + w + 1 ) << endl;
}