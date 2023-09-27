#include<cstdio>
#include<cmath>
#include<iostream>

using namespace std;

signed main(){
    int n;
    double ret = 100000;
    scanf( "%d", &n );
    while( n > 0 ){
        ret *= 1.05;
        ret = ceil( ret / 1000 ) * 1000;
        n--;
    }
    printf( "%.0f\n", ret  );
    return 0;    
}
