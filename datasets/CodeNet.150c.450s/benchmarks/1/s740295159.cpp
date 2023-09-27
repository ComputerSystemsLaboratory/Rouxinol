#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

typedef unsigned long long ull;

int main()
{
    using namespace std;

    int n;
    cin >> n;

    vector<ull> T(n, 0);
    vector<ull> V(n, numeric_limits<ull>::max());

    for( int i=0; i<n; ++i ) {
        cin >> T[i];
    }

    V[0] = T[0];
    int length = 1;
    for( int i=1; i<n; ++i ) {
        if ( T[i] > V[length-1] ) {
            V[length] = T[i];
            ++length;
        } else {
            *lower_bound(V.begin(), V.begin() + length + 1, T[i]) = T[i];
        }
    }

    cout << length << endl;
}