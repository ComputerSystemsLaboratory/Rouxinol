#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <string.h>
#include <map>
#include <set>
#include <functional>
#include <complex>
#include <stack>
#include <tuple>
#include <array>
using namespace std;

#define FOR(i,a,b) for (int i=(a);i<(b);i++)
#define RFOR(i,a,b) for (int i=(b)-1;i>=(a);i--)
#define REP(i,n) for (int i=0;i<(n);i++)
#define RREP(i,n) for (int i=(n)-1;i>=0;i--)
#define ALL(u) begin(u),end(u)
#define PB push_back
#define LE(n,m) ((n) < (m) + EPS)
#define GE(n,m) ((n) + EPS > (m))
#define EQ(n,m) (abs((n)-(m)) < EPS)

typedef long long int ll;
const int INF = (1<<30) - 1;
const double EPS = 1e-9;
const int MOD = 1000000007;

int W, H;
int dw[] = {0, 0, 1, -1};
int dh[] = {1, -1, 0, 0};

int dfs(vector<string> &field, int h, int w){
    field[h][w] = '#';
    
    int res = 1;
    for(int i=0; i<4; i++){
        int nh = h + dh[i];
        int nw = w + dw[i];
        if(0<=nh && nh<H && 0<=nw && nw<W && field[nh][nw]=='.'){
            res += dfs(field, nh, nw);
        }
    }
    return res;
}

//g++ -std=c++0x -msse4.2 -O3
//#include <bits/stdc++.h>
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout.precision(16);
    //cout.setf(ios::fixed);
    
    while(cin >> W >> H, W|H){
        vector<string> field(H);
        for(auto &l: field)
            cin >> l;
        
        for(int i=0; i<H; i++)
            for(int j=0; j<W; j++) if(field[i][j] == '@')
                cout << dfs(field, i, j) << endl;
    }
    
    
    return 0;
}