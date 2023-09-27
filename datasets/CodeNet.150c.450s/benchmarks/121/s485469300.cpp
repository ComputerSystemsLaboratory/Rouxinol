#include<bits/stdc++.h>
#define range(i,a,b) for(int i = (a); i < (b); i++)
#define rep(i,b) for(int i = 0; i < (b); i++)
#define all(a) (a).begin(), (a).end()
#define show(x)  cerr << #x << " = " << (x) << endl;
#define debug(x) cerr << #x << " = " << (x) << " (L" << __LINE__ << ")" << " " << __FILE__ << endl;
const int INF = 100000000;
using namespace std;

string s[100];
int h, w;

static const int dy[4] = {0,1,0,-1};
static const int dx[4] = {1,0,-1,0};

void dfs(char c, int y, int x){
    if(y < 0 || x < 0 || y >= h || x >= w) return;
    if(s[y][x] != c) return;
    s[y][x] = '.';

    rep(i,4){
        dfs(c,y + dy[i], x + dx[i]);
    }
}

int main(){
    while(cin >> h >> w, h||w){
        rep(i,h) cin >> s[i];

        int cnt = 0;
        rep(i,h){
            rep(j,w){
                if(s[i][j] != '.'){
                    dfs(s[i][j], i, j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
}