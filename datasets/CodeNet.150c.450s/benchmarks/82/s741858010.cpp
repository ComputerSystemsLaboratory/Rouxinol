#include <bits/stdc++.h>
typedef long long ll;
#define rep(i,a,n) for(ll i = a;i < n;i++)
#define rrep(i,a,n) for(ll i = n; i >= a;i--)
#define index_check(i,n) if(i > n-1 || i < 0) continue; 
#define LINF 1e18
#define INF 1e9
using namespace std;


const ll MOD = 1e9+7;

struct DICE{
    ll num[6];
    ll top;
    ll north,south,west,east;

    DICE(){
        top = 0;
        south = 1;
        east = 2;
        west = 3;
        north = 4;
    }

};


int main(){
    DICE d;
    ll q;

    rep(i,0,6){
        cin >> d.num[i];
    }
    cin >> q;


    srand(time(NULL));
    rep(i,0,q){
        ll a,b;
        cin >> a >> b;

        while(1){
            ll rnd = rand() % 4;
            ll tmp;
            switch(rnd){
                case 0:
                    tmp = d.south;
                    d.south = 5 - d.top;
                    d.north = d.top;
                    d.top = tmp;
                    break;
                case 1:
                    tmp = d.west;
                    d.west = 5 - d.top;
                    d.east = d.top;
                    d.top = tmp;
                    break;
                case 2:
                    tmp = d.north;
                    d.north = 5 - d.top;
                    d.south = d.top;
                    d.top = tmp;
                    break;
                case 3:
                    tmp = d.east;
                    d.east = 5 - d.top;
                    d.west = d.top;
                    d.top = tmp;
                    break;
            }

            if(d.num[d.top] == a && d.num[d.south] == b){
                cout << d.num[d.east] << endl;
                break;
            }
        }
    }
    

    return 0;
}

