#include<cstdio>

using namespace std;

signed main(){
    int  n;
    while( scanf( "%d\n", &n ) != EOF )
    {
        int ret = 0l;
        for( int i = 0; i <= 9; i++ ){
            for( int j = 0; j <= 9; j++ ){
                for( int k = 0; k <= 9; k++){
                    for( int l = 0; l <= 9; l++ )
                    if( i + j + k + l == n ) ret++;
                }
            }
        }    
        printf( "%d\n", ret );
    }
    return 0;
}
