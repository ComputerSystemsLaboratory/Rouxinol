#include<iostream>
#include<queue>
using namespace std;
struct Data{
    int x;
    int y;
    int t;
};
bool vis[1005][1005];
const int dx[] = {1,0,-1,0},dy[] = {0,1,0,-1};
int main(){
    int h,w,n;
    cin>>h>>w>>n;
    string fi[1020];
    Data init;
    for(int i = 0;i < h;i++){
        cin>>fi[i];
        for(int j = 0;j < w;j++){
            if(fi[i][j] == 'S'){
                init.x = j;
                init.y = i;
            }
        }
    }
    init.t = 0;

    queue<Data> Q;
    Q.push(init);
    int now = 1;
    while(!Q.empty()){
        Data D = Q.front();
        Q.pop();
        D.t++;
        if(vis[D.y][D.x])continue;
        if(fi[D.y][D.x] == now + '0'){
            now++;
            for(int i = 0;i < h;i++){
                for(int j = 0;j < w;j++){
                    vis[i][j] = false;
                }
            }
            Q = queue<Data>();
            Q.push(D);
        }
        vis[D.y][D.x] = true;
        if(now == n+1){
            cout<<D.t-1<<endl;
            return 0;
        }
        for(int i = 0;i < 4;i++){
            int x = D.x + dx[i];
            int y = D.y + dy[i];
            if(0 <= x&&x < w&&0 <= y&& y < h){
                if(fi[y][x] == 'X')continue;
                if(vis[y][x])continue;
                Data E = D;
                E.x = x, E.y = y;
                Q.push(E);
            }
        }
    }
}