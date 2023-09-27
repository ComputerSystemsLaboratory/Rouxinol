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
    string s;

    rep(i,0,6){
        cin >> d.num[i];
    }

    cin >> s;

    rep(i,0,s.size()){
        ll tmp;
        switch(s[i]){
            case 'N':
                tmp = d.south;
                d.south = 5 - d.top;
                d.north = d.top;
                d.top = tmp;
                break;
            case 'E':
                tmp = d.west;
                d.west = 5 - d.top;
                d.east = d.top;
                d.top = tmp;
                break;
            case 'S':
                tmp = d.north;
                d.north = 5 - d.top;
                d.south = d.top;
                d.top = tmp;
                break;
            case 'W':
                tmp = d.east;
                d.east = 5 - d.top;
                d.west = d.top;
                d.top = tmp;
                break;
        }
    }

    cout << d.num[d.top] << endl;
    return 0;
}

