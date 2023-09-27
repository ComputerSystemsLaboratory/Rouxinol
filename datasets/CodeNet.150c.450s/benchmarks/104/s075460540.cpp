#include<cstdio>
#include <numeric>

using namespace std;

int w,n;
int v[30];

int main(){
    for( int i = 0; i < 30; i++ )
    {
        v[i] = i + 1;
    }
    scanf( "%d \n%d\n", &w, &n );
    while( n > 0 )
    {
        int a,b;
        scanf( "%d,%d\n", &a, &b );
        swap( v[a - 1], v[b - 1] );
        n--;
    }
    
    for( int i = 0; i < w; i++ )
    {
        printf( "%d\n", v[i] );
    }
    return 0;
}
