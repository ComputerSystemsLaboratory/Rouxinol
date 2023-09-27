#include<iostream>
#include<vector>
#include<algorithm>
#include<cctype>
#include<utility>
#include<string>
#include<cmath>

#define REP(i, n) for(int i = 0;i < n;i++)
#define REPR(i, n) for(int i = n;i >= 0;i--)
#define FOR(i, m, n) for(int i = m;i < n;i++)
#define FORR(i, m, n) for(int i = m;i >= n;i--)
#define SORT(v, n) sort(v, v+n);
#define VSORT(v) sort(v.begin(), v.end());
#define llong long long
#define pb(a) push_back(a)
#define INF 999999999
using namespace std;
typedef pair<int, int> P;
typedef pair<llong, llong> LP;
typedef pair<int, P> PP;
typedef pair<llong, LP> LPP;


int w,h;
int dx[4] = {0, 1, 0, -1}, dy[4] = {-1, 0, 1, 0};

void dfs(vector<vector<int> > &map,int x,int y){
    /*for(int i = 0;i < h; i++){
        for(int j = 0; j < w; j++){
            cout << map[i][j] << " " ;
        }
        cout << endl;
    }*/
    //今いるところを-100に置き換える
    map[x][y] = -100;
    //移動方向をループ
    for(int dx = -1;dx <= 1;dx++){
        for(int dy = -1;dy <= 1;dy++){
            //x方向にdx,ｙ方向にdy移動した場所を(nx,ny)とする
            int nx = x + dx, ny = y + dy;
            if(0 <= nx && nx < h && 0 <= ny && ny < w && map[nx][ny] == 1){
                dfs(map,nx,ny);
            }
        }
    }
    return;
}

int solve(vector<vector<int> > &map,int h,int w){

    /*for(int i = 0;i < h; i++){
        for(int j = 0; j < w; j++){
            cout << map[i][j] << " " ;
        }
        cout << endl;
    }*/

    int ans = 0;
    for(int i = 0;i < h;i++){
        for(int j = 0;j < w;j++){
            if(map[i][j] == 1){
                //Wが残っているならばその場所からdfsを始める
                dfs(map,i,j);
                //ここで1つの水たまりが見つかったことになるので水たまりの個数を１つ足す
                ans++;
            }
        }
    }
    return ans;
}

int main(){

    
    

    while(cin >> w >> h){

        if(w == 0 && h == 0){
            break;
        }
        int ans = 0;
        vector<vector<int> > map(h,vector<int>(w));//周波数ベクトル列データ用の2次元配列

        for(int i = 0;i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> map[i][j];
                //cout << map[i][j] << " " ;
            }
            //cout << endl;
        }
        //cout << endl;

        ans = solve(map,h,w);

        cout << ans << endl;
    }

   


    

    return 0;
}
