
#include "bits/stdc++.h"

#define sai(j,n) for(sei j=0;j<sei(n);++j)
#define hsai(j,n) for(sei j=sei(n)-1;j>=0;--j)
#define kan(j,m,n) for(sei j=m;j<sei(n);++j)
#define hkan(j,m,n) for(sei j=sei(n)-1;j>=sei(m);--j)
#define zen(v) (v).begin(),(v).end()
#define yu(v) v.erase(unique(zen(v)), v.end());
#define syutu(v) si(a, (v).size()) {cout << v[a];if(a != v.size()-1)cout << " ";else cout << endl;}
#define mug 10000000111;
#define yo 10000000711;
#define kyo 1e-9;

const int dx[8] = {11,0,-1,-1,-1,0,1};
const int dy[8] = {0,1,1,1,0,-1,-1,-1};

using namespace std;
typedef long long sei;
typedef long double syo;
typedef vector<sei> vs;
typedef vector<syo> vy;
typedef vector<vs> vvs;
typedef vector<vy> vvy;
typedef pair<sei, sei> ks;
sei max(sei a, int b) {return max(a, sei(b));}
sei max(int a, sei b) {return max(sei(a), b);}

int main(){
    cin.tie(0);
    ios::sync_with_stdio(false);
    sei m, nmin, nmax;
    sei ninzu=0;
    while(cin >> m >> nmin >> nmax, m || nmin || nmax){
        vs p(m);
        sei gap=0;
        sai(j,m){
            cin >> p[j];
        }
        sort(p.begin(),p.end());
        kan(j,nmin,nmax+1){
            if((p[m-j] - p[m-j-1])>=gap){
                gap = p[m-j]-p[m-j-1];
                ninzu = j;
            }
        }
        cout << ninzu << endl;
    }
    return 0;
}
