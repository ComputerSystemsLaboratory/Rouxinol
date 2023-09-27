

//幅優先探索（bfs）
//迷路の最短路

#include<iostream>
#include<string>
#include<vector>
#include<math.h>
#include<map>
#include<algorithm>
#include<set>
#include <stdexcept>
#include<queue>
#define rep(i,N) for(int i=0;i<(N);i++)
#define FOR(i,a,b) for(int i=(a);i<(b);i++)
using namespace std;
const long long MOD = 1e9 + 7;
const long long INF = 1e12;
typedef long long ll;
typedef pair<int,int> P;
int ceil(int a,int b){// a以上でbの倍数の最小値を出力//
    return (a+b-1)/b*b;
}

//シフト演算　(1<<k) 2のk乗

int stoii(string s){//stoi関数の代用 文字列を数値として読み取りint型に変換//
    return atoi(s.c_str());
}

const int max_n=51,max_m=51;
int N,M;
char maze[max_n][max_m]; //迷路を表す文字の配列
int inf=100000;
int sx,sy;//startの座標
int gx,gy;//goalの座標
int d[max_n][max_m];//各点までの最短距離の配列

//移動４方向のvector
int dx[4]={1,0,-1,0};
int dy[4]={0,1,0,-1};
//(sx,sy)⇒(gx,gy)への最短距離を求める
//たどりつけなかったらINF

int bfs(){
    queue<P> que;
    //すべての点をINFで初期化
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            d[i][j]=inf;
        }
    }
    //スタート地点をqueueに入れ、その点の距離を0とする
    que.push(P(sx,sy));
    d[sx][sy]=0;

    //キューが空になるまでループ
    while(que.size()){
        //queueの先頭を取り出す
        P p =que.front();
        que.pop();
        //取り出してきた状態が、goalなら探索をやめる
        if(p.first==gx && p.second==gy)break;
        //移動４方向をループ
        for(int i=0;i<4;i++){
            //移動した後の点をnx,nyとする
            int nx=p.first+dx[i],ny=p.second+dy[i];

            //移動が可能かの判定はd[nx][ny]!=INFなら訪れたことがある
            if(0<=nx && nx<N && 0<=ny && ny<M && maze[nx][ny]!='#' &&
            d[nx][ny]==inf){
            //移動できるならキューに入れて、その点の距離をｐからの距離＋１で確定する
            que.push(P(nx,ny));
            d[nx][ny]=d[p.first][p.second]+1;
            }
        }    
    }
    return d[gx][gy];    
}

int main(){
    int num[5];
    vector<int> kekka(1000,10000);
    int kaisu=-1;
    while(1){
        bool k=1;
        for(int i=0;i<5;i++){
            cin>>num[i];
            if(num[i]!=0)k=0;
        }
        if(k)break;
        kaisu++;
        int stop[10000],ans=-1;
        for(int i=0;i<num[0];i++)cin>>stop[i];
        for(int i=0,n=num[4],j=0;i<10001&&j<num[0];i++){
            if(n==stop[j])j++;
            if(j==num[0])ans=i;
            n=(num[1]*n+num[2])%num[3];
        }
        kekka[kaisu]=ans;
    }
    for(int i=0;i<kaisu+1;i++) cout<<kekka[i]<<endl;
    return 0;
}
