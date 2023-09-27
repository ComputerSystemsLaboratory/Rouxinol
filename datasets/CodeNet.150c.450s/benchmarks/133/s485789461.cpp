#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <iomanip>
#include <stack>
#include <algorithm>
#include <iostream>
#include <string>
#include <map>
#include <queue>
#include <stdio.h>
#include <math.h>


using namespace std;

typedef long long ll;

typedef vector<vector<int>> vvi;
typedef vector<int> vi;
typedef vector<string> vs;
typedef vector<vector<string>> vvs;
typedef vector<ll> vll;

typedef pair<int, int> P;
#define mp(x, y) make_pair(x, y)

typedef queue<int> qi;
typedef queue<string> qs;


#define rep(i, n) for(int i=0; i<(n); ++i)
#define repp(i, a, b) for(int i = (a); i <= (b); i++)
#define repm(i, n) for(int i=n; i >= 0; i--)

#define all(v) v.begin(), v.end()
//sort( all(v) )　などと使える

int D;
vector<int> c(26);
vvi s;
vi T;
vvi last;

int manzoku = 0;


int main(void) {
    cin >> D;
    rep(i, 26) cin >> c[i];
    
    s.resize(D, vi(26));
    //i日目にAjCをやるとs_ij 満足度が上がるよ
    rep(i, D) rep(j, 26) {
        int int_s; cin >> int_s;
        s[i][j] = int_s;
    }


    
    last.resize(D+1 , vi(26));
    rep(i, 26) last[0][i] = 0;


    //d日目にAjCをやるよ
    rep(d, D) {
        int i; cin >> i;
        i--;
        last[d+1][i] = d+1;

        manzoku += s[d][i];

        rep(j, 26) {
            if (j == i) continue;
            last[d+1][j] = last[d][j];

            manzoku -= (d+1 - last[d+1][j]) * c[j];
        }

        cout << manzoku << endl;
    }

 }