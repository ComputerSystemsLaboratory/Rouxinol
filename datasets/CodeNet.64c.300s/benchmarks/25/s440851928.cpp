#include <cstdio>

using namespace std;

int hit = 0, blow = 0,a[4], b[4];

int main()
{
    while (scanf("%d %d %d %d\n%d %d %d %d\n", &a[0], &a[1], &a[2], &a[3], &b[0], &b[1], &b[2], &b[3] ) != EOF)
    {
        hit = 0, blow = 0;
        for( int i = 0; i < 4; i++ )
        {
            if( a[i] == b[i] )
            {
                hit++;
            }
            for( int j = 0; j < 4; j++ )
            {
                if( i != j && a[i] == b[j] )
                {
                    blow++;
                }
            }
        }
        
        printf( "%d %d\n", hit, blow );

    }
    return 0;
}
