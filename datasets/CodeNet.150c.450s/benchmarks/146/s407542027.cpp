#include <cstdio>

using namespace std;

double x1,y1,x2,y2,x3,y3,x4,y4;
    

int main()
{
    int n; scanf( "%d\n", &n );
    while( n > 0 )
    {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf\n", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4 );
        double dx1 = x2 - x1, dx2 = x4 - x3, dy1 = y2 - y1, dy2 = y4 - y3, det = dx1 * dy2 - dx2 * dy1;
        if( det < 0 )
        {
            det *= -1;
        }

        if( det < 0.0000000001 )
        {
            printf( "YES\n" );
        }
        else
        {
            printf( "NO\n" );
        }

        /* if( (dx1 == 0 && dx2 == 0) || (dy1 == 0 && dy2 == 0 ) )
        {
            printf( "YES\n" );
        }
        else if( dx1 != 0 && dx2 != 0 )
        {
            dy1 /= dx1;
            dy2 /= dx2;
            if( dy1 == dy2 || dy1 == -dy2 )
            {
                printf( "YES\n" );
            }
        }
        else
        {
            printf( "NO\n" );
        }
         */
        n--;
    }
    return 0;
}
