#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <set>
#include <string>
#include <cmath>
using namespace std;

#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define REP(i, k, n) for (int i = (int)(k); i < (int)(n); i++)
#define rrep(i, n) for (int i = (int)(n)-1; i >= 0; i--)
#define rREP(i, k, n) for (int i = (int)(n)-1; i >= k; i--)

#define debug(x) cerr<<#x<<": "<<x<<'\n'

#define fi first
#define se second

#define vi vector<int>
#define pb push_back
#define mp make_pair

#define pcnt __builtin_popcount

typedef long long ll;

const int inf = 100100100;
const int MOD = (int)1e9 + 7;
const double EPS = 1e-9;

int main(){
    cin.tie(0);
    ios_base::sync_with_stdio(false);
    int n;
    while(cin >> n,n){
        bool a[21][21] = {};
        rep(i,n){
            int x,y;
            cin >> x >> y;
            a[x][y] = true;
        }
        int m;
        cin >> m;
        int x = 10;int y=10;
        a[10][10] = false;
        rep(i,m){
            string s;
            int d;
            cin >> s >> d;
            switch(s[0]){
                case 'N':
                rep(k,d){
                    y+=1;
                    a[x][y] = false;
                }
                break;
                case 'E':
                rep(k,d){
                    x+=1;
                    a[x][y] = false;
                }
                break;
                case 'S':
                rep(k,d){
                    y-=1;
                    a[x][y] = false;
                }
                break;
                case 'W':
                rep(k,d){
                    x-=1;
                    a[x][y] = false;
                }
                break;
            }
        }
        [&]()->void{
            rep(x,21) rep(y,21) if(a[x][y]){
                cout << "No" << endl;
                return;
            }
            cout << "Yes" << endl;
        }();


    }
    return 0;

}

