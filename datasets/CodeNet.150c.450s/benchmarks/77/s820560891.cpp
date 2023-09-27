#include <iostream>
#include <cstdio>
#include <iomanip>

#include <vector>
#include <map>
#include <set>
#include <queue>
#include <bitset>
#include <stack>
#include <utility>

#include <numeric>
#include <algorithm>
#include <functional>

#include <cctype>

#include <complex>
#include <string>
#include <sstream>

using namespace std;

#define all(c) c.begin(),c.end()
#define rall(c) c.rbegin(),c.rend()
#define rep(i,n) for(unsigned int i=0;i<(n);i++)
#define tr(it,container) for(typeof(container.begin()) it = container.begin(); \
                             it != container.end(); ++it)

typedef long long ll;
typedef complex<double> P;
const int dx[] = {1,0,-1,0};
const int dy[] = {0,-1,0,1};
const double EPS = 1e-9;
const int days[] = {31,28,31,30,31,30,31,31,30,31,30,31};
const int daysleap[] = {31,29,31,30,31,30,31,31,30,31,30,31};


int main(){
    while(true){
        int N,M;
        vector<vector<char> > F(21,vector<char>(21,'0'));
        cin >> N;
        if(N==0) break;
        rep(i,N){
            int x,y;
            cin >> x >> y;
            F[y][x] = '1';
        }

        int x=10,y=10;
        cin >> M;
        rep(i,M){
            char c;int l;
            int ind = 0;
            cin >> c >> l;
            if(c=='N') ind = 3;
            if(c=='E') ind = 0;
            if(c=='W') ind = 2;
            if(c=='S') ind = 1;
            rep(j,l){
                x += dx[ind];
                y += dy[ind];
                F[y][x] = '0';
            }
        }
        bool ok = true;
        rep(i,21) rep(j,21){
            if(F[i][j] == '1') ok = false;
        }
        if(ok) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
    return 0;
}