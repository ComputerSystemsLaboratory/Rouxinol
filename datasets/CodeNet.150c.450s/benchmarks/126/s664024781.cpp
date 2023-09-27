#include<iostream>
using namespace std;

void calcRoad( int m[16][16], int t, int s, int x, int y )
{
    if( t == x && s == y )
        return;
    
    if( t - 1 >= 0 && m[t-1][s] != -1 )
    {
        m[t-1][s]++;
        calcRoad( m, t - 1, s, x, y );
    }

    if( s + 1 <= y && m[t][s+1] != -1 )
    {
        m[t][s+1]++;
        calcRoad( m, t, s + 1, x, y );
    }
}

int main()
{
    int a, b, n;
    int x, y;
    int m[16][16];

    while( cin >> a >> b ) 
    {
        if( a == 0 && b == 0 )
            break;
        
        cin >> n;

        for( int i = 0; i < 16; i++ )
            for( int j = 0; j < 16; j++ )
                m[i][j] = 0;

        for( int i = 0; i < n; i++ )
        {
            cin >> x >> y;
            m[b-1-(y-1)][x-1] = -1;
        }

        calcRoad( m, b - 1 , 0, 0, a - 1 );

        cout << m[0][a-1] << endl;
    }
    return 0;
}
