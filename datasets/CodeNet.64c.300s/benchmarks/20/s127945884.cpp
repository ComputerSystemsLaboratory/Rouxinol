#include<cstdio>

using namespace std;

signed main(){
    int ret = 0, d;
    while( scanf( "%d", &d ) != EOF ){
        int m = 600 / d;
        ret = m * ( m - 1 ) * ( 2 * m - 1 ) / 6 * d * d * d;
        printf( "%d\n", ret );
    }
    return 0;
}
