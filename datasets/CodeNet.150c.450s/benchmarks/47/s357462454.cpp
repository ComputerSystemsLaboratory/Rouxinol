#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<cmath>
#include<cstdint>

#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<iterator>
#include<algorithm>
#include<utility>

using namespace std;
 
#define ALL(g) (g).begin(),(g).end()
#define REP(i, x, n) for(int32_t i=x; i<n; i++)
#define rep(i,n) REP(i,0,n)
#define RREP(i, x, n) for(int32_t i = n-1; i>=x; i--)
#define rrep(i,n) RREP(i,0,n)

#define P(p) cout<<(p)<<endl;
#define pb push_back

typedef vector<int> VI;

// --------------------

int main(void){
    uint32_t W = 0, H = 0, x = 0, y = 0, r = 0;
    
    cin >> W >> H >> x >> y >> r;
    
    // ?????????????????????4?????????????????????????????????
    
    // ???
    if( ( y + r > H ) || ( y - r > H ) || ( y + r < 0 ) || ( x - r < 0 ) ||
        ( x + r > W ) || ( x - r > W) || ( x + r < 0 ) || ( x - r < 0 ) ){
        cout << "No" << endl;
        return 0;
    }
    
    cout << "Yes" << endl;
    return 0;
}