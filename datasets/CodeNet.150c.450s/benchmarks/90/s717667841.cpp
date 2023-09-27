#include <cstdio>

using namespace std;

int a[100],mp[101] = {0};

signed main()
{
    int key, j = 0;
    while ( scanf("%d\n", &key ) != EOF)
    {
        a[j] = key;
        mp[ key ]++;
        j++;
    }
    int mode_value = 0;
    for( int i = 1; i <= 100; i++ )
    {
        if( mode_value < mp[i] )
        {
            mode_value = mp[i];
        }
    }
    
    for( int i = 1; i <= 100; i++ )
    {
        if( mp[i] == mode_value )
        {
            printf( "%d\n", i );
        }
    }
    return 0;
}
