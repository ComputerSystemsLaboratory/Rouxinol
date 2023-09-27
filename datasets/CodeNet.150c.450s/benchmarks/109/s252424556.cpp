#include <iostream>
#include <stdio.h>
using namespace std;
#define max_t 24 * 60 * 60

int main(){
    int n;
    while( cin >> n, n ){
        int list[max_t] = {};
        while( n-- ){
            int d_h, d_m, d_s;      // the departure time
            int a_h, a_m, a_s;      // the arrival time
            //cin >> d_h >> ":" >> d_m >> ":" >> d_s;
            //cin >> a_h >> ":" >> a_m >> ":" >> a_s;
            scanf("%d:%d:%d", &d_h, &d_m, &d_s );
            scanf("%d:%d:%d", &a_h, &a_m, &a_s );
            int s, e;
            s = d_h * 60 * 60 + d_m * 60 + d_s;
            e = a_h * 60 * 60 + a_m * 60 + a_s;
            //cout << s << " " << e << endl;
            for( int i = s; i < e; i++ ){
                list[i]++;
            }
        }
        int max = 0;
        for( int i = 0; i < max_t; i++ ){
            if( max < list[i] ) max = list[i];
        }
        cout << max << endl;
    }
}