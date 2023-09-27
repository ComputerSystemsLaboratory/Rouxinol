#include <iostream>
#include <array>
#include <cmath>
#include <algorithm>
#include <limits>

typedef unsigned int ui;
ui T[50001] = {};
ui C[21];

int main()
{
    std::fill( T + 1, T + 50001, std::numeric_limits<ui>::max() );

    int n, m;
    std::cin >> n >> m;

    for( int i=0; i<m; ++i ) {
        std::cin >> C[i];
    }

    for( int i=0; i<m; ++i ) {
        for( int j=C[i]; j<=n; ++j ) {
            T[j] = std::min( T[j], T[j - C[i]] + 1 );
        }
    }

    std::cout << T[n] << std::endl;
}