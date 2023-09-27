#include<cstdio>
#include<vector>
#include<iostream>

using namespace std;

vector<bool> prime(1000010, 1);
int n;

void precalc()
{
    prime[0] = 0; prime[1] = 0; prime[2] = 1;
    for( int i = 2; i * i <= 999999; i++ ){
        if( prime[i] ){
            for( int j = 1; ( j + 1 ) * i <= 999999; j++ ){
                prime[i * ( j + 1 )] = 0;
            }
        }
    }

}

signed main(){
    precalc();
    while( scanf( "%d", &n ) != EOF )
    {
        int ret = 0;
        for( int i = 0; i <= n; i++ )
        {
            if( prime[i] )
            {
                ret++;
            }
        }
        printf( "%d\n", ret );
    }
    return 0;
}
