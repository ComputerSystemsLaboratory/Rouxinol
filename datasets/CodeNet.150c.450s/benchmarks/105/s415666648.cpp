#include <bits/stdc++.h>
using namespace std;
#define fi first
#define se second
typedef long long ll;
const int maxn = 500;
typedef pair<ll, ll>par;
const ll mod = 1e9+7;

int id[maxn];
ll a[maxn];
char s[maxn];

void add( int p ){

    for( int i = 63; i >= 0; i-- ){
        if( (a[p] >> i) & 1 ){
            if( id[i] == -1 ){
                id[i] = p;
                break;
            }else{
                a[p] ^= a[ id[i] ];
            }
        }
    }
}

bool can( int p ){
    for( int i = 63; i >= 0; i-- ){
        if( (a[p] >> i) & 1 ){
            if( id[i] == -1 ) return 0;
            a[p] ^= a[ id[i] ];
        }
    }

    return 1;
}

int main()
{
    cin.tie(0);
    ios_base::sync_with_stdio(0);
    #ifdef acm
    freopen("a.in", "r",stdin);
    #endif // acm


    int test;
    cin >> test;

    int n;
    while( test-- ){
        cin >> n;
        for( int i = 1; i <= n; i++ )
            cin >> a[i];

        cin >> (s+1);

        if( s[n] == '1' ){
            cout << "1\n";
            continue;
        }

        for( int i = 0; i <= 63; i++ )
            id[i] = -1;

        int winer = 0;
        for( int i = n; i >= 1; i-- ){
            if( s[i] == '0' )
                add(i);
            else
                if( !can(i) ){
                    winer = 1;
                    break;
                }
        }

        cout << winer << "\n";
    }

    return 0;
}
