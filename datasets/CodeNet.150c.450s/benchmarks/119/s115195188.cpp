#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

typedef pair<int,int> pii;
typedef vector<int> vi;
typedef vector<vi> vvi;

constexpr int dx[8]={1,1,1,0,0,-1,-1,-1};
constexpr int dy[8]={1,0,-1,1,-1,1,0,-1};

vvi t;
int W,H;

void dfs(int x,int y){
    t[x][y]='0';
    for(int i=0;i<8;i++){
        int nx = x + dx[i];
        int ny = y + dy[i];
        if(nx>=0 && nx<H && ny>=0 && ny<W && t[nx][ny]==1) dfs(nx,ny);
    }
    return;
}

int main(){
    while(cin>>W>>H){
        if(W==0&&H==0) return 0;

        t.resize(H);
        for(int i=0;i<H;i++) t[i].resize(W);

        for(int i=0;i<H;i++) for(int j=0;j<W;j++) cin>>t[i][j];

        int cnt=0;

        for(int i=0;i<H;i++) for(int j=0;j<W;j++) if(t[i][j]==1){
            cnt++;
            dfs(i,j);
        }
        cout << cnt << endl;
    }
}