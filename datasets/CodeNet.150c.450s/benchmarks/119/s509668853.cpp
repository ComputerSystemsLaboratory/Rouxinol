#include <algorithm>
#include <cmath>
#include <climits>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <cassert>

using namespace std;

#define LOG(...) printf(__VA_ARGS__)
//#define LOG(...)
#define FOR(i,a,b) for(int i=(int)(a);i<(int)(b);++i)
#define REP(i,n) for(int i=0;i<(int)(n);++i)
#define ALL(a) (a).begin(),(a).end()
#define RALL(a) (a).rbegin(),(a).rend()
#define EXIST(s,e) ((s).find(e)!=(s).end())
#define SORT(c) sort((c).begin(),(c).end())
#define RSORT(c) sort((c).rbegin(),(c).rend())
#define CLR(a) memset((a), 0 ,sizeof(a))

typedef long long ll;
typedef unsigned long long ull;
typedef vector<bool> vb;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vb> vvb;
typedef vector<vi> vvi;
typedef vector<vll> vvll;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

const int dx[] = {-1,0,1,0}; const int dy[] = {0,1,0,-1};

const int L_MAP = 50 + 2;
bool field[L_MAP][L_MAP];

const bool LAND = true;
const bool SEA = false;

void dfs(int x, int y){
    if(field[y][x] == SEA)
        return;

    field[y][x] = SEA;
    FOR(dy, -1, 1 + 1){
        FOR(dx, -1, 1 + 1){
            dfs(x+ dx, y + dy);
        }
    }
}

int main() {
    int w, h;
    while(cin >> w >> h, w|h){
        fill_n((bool *)field, L_MAP * L_MAP, SEA);
        REP(y, h){
            REP(x, w) {
                cin >> field[y + 1][x + 1];
            }
        }

        int cnt = 0;
        REP(y, h) {
            REP(x, w) {
                if (field[y + 1][x + 1] == LAND) {
                    dfs(x + 1, y + 1);
                    cnt ++;
                }
            }
        }

        cout << cnt << endl;
    }

}