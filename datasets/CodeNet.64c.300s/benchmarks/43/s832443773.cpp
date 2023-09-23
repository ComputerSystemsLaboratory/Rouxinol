#include <iostream>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
    int a[4], b[4];
    for( int i=0; i<4; ++i )
        cin >> a[i];

    for( int i=0; i<4; ++i )
        cin >> b[i];

    cout << max( accumulate( a, a+4, 0 ), accumulate( b, b+4, 0 ) ) << endl;
}