#include <algorithm>
#include <cstring>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <map>

#define FOR(i,k,n) for(int (i) = (k); (i) < (n); ++(i))
#define rep(i,n) FOR(i,0,n)

using namespace std;
typedef pair<int, int> i_i;

int a,w,h;
bool t[22][22],s[22][22];

void dfs(i_i p) {
    s[p.first][p.second] = 1;
    a += 1;
    rep(j,2){
        if(t[p.first][p.second+(int)pow(-1,j)] && s[p.first][p.second+(int)pow(-1,j)] == 0) {
            dfs(make_pair(p.first,p.second+(int)pow(-1,j)));
        }
    }
    rep(i,2) {
        if(t[p.first+(int)pow(-1,i)][p.second] && s[p.first+(int)pow(-1,i)][p.second] == 0) {
            dfs(make_pair(p.first+(int)pow(-1,i),p.second));
        }
    }
}

int main() {
    while(1) {
        i_i m;
        scanf("%d %d",&w,&h);
        if(w == 0) break;
        FOR(i,1,h+1){
            char a[20];
            scanf("%s",a);
            FOR(j,1,w+1) {
                if(a[j-1] == '.') t[i][j] = 1; 
                if(a[j-1] == '@') m = make_pair(i,j);
            }
        }
        dfs(m);
        printf("%d\n",a);
        a = 0;
        rep(i,22) {
            rep(j,22) {
                t[i][j] = 0,s[i][j] =0;
            }
        }
    }
    return 0;
}