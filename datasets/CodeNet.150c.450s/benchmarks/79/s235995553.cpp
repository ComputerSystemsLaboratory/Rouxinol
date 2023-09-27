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

//g++ -std=c++0x -msse4.2 -O3
//#include <bits/stdc++.h>
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    //cout.precision(16);
    //cout.setf(ios::fixed);

    int n, r;
    while(cin >> n >> r, n|r){
        vector<int> pile(n);
        for(int i=0; i<n; i++)
            pile[i] = n-i;
        
        for(int _=0; _<r; _++){
            int p, c;
            cin >> p >> c;
            vector<int> t(n);
            for(int i=0; i<c; i++)
                t[i] = pile[p-1+i];
            for(int i=0; i<p-1; i++)
                t[i+c] = pile[i];
            for(int i=p-1+c; i<n; i++)
                t[i] = pile[i];
            pile = t;
        }
        
        cout << pile[0] << endl;
    }
    
    return 0;
}