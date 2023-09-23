#include <iostream>

using namespace std;

int main()
{
    int const ns[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    int ss[11][46] = {};
    for( int i=0; i<1024; ++i ) {
        int sum = 0, n = 0;
        for( int j=0; j<10; ++j ) {
            if ( i & 1 << j ) {
                sum += ns[j];
                ++n;
            }
        }
        ++ss[n][sum];
    }

    int n, s;
    while( cin >> n >> s, n||s ) {
        cout << ( ( n >= 0 && n <= 10 && s >= 0 && s <= 45 ) ? ss[n][s] : 0 ) << endl;
    }
}