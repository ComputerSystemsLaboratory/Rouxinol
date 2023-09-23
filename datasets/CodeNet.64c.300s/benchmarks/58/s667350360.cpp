#include<iostream>
using namespace std;

int calcDistribution( char m[100][100], int i, int j, int h, int w, char c )
{
    if( i < 0 || j < 0 || i >= h || j >= w || m[i][j] != c )
        return 0;
    
    m[i][j] = '0';

    calcDistribution( m, i - 1, j, h, w, c );
    calcDistribution( m, i + 1, j, h, w, c );
    calcDistribution( m, i, j + 1, h, w, c );
    calcDistribution( m, i, j - 1, h, w, c );

    return 1;
}

int main()
{
    int h, w;
    char m[100][100];

    for( int i = 0; i < 100; i++ )
        for( int j = 0; j < 100; j++ )
            m[i][j] = '0';

    while( cin >> h >> w )
    {
        if( h == 0 && w == 0 )
            break;

        for( int i = 0; i < h; i++ )
            for( int j = 0; j < w; j++ )
                cin >> m[i][j];
        
        int sum = 0;
        for( int i = 0; i < h; i++ )
            for( int j = 0; j < w; j++ )
            {
                sum += calcDistribution( m, i, j, h, w, '@' );
                sum += calcDistribution( m, i, j, h, w, '#' );
                sum += calcDistribution( m, i, j, h, w, '*' );
            }
        
        cout << sum << endl;
    }
    return 0;
}
