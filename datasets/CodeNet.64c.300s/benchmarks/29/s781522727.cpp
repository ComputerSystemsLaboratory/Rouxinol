#include <iostream>

using namespace std;
typedef long long int ll;

int main()
{
    ll e;
    while( cin >> e, e != 0 ) {
        ll mm = 99999999;

        ll z[101];
        ll zn = 0;
        for( ll i=0; i<=100; ++i ) {
            z[zn] = e - i*i*i;
            ++zn;
        }

        for( ll i=0; i<=100*100*100; ++i ) {
            for( ll j=0; j<zn ;++j ) {
                if ( z[j] - i*i < 0 )
                    break;
                
                ll const vy = i*i;
                ll const vz = -(z[j] - e);
                ll const vx = z[j] - vy;
                
                if ( vx + vy + vz != e )
                    break;
                
                if ( i + j + vx < mm ) {
                    mm = i + j + vx;
                }
            }
        }
        cout << mm << endl;
    }
}