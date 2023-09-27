#include <iostream>
#include <queue>
#include <vector>

using namespace std;

#define MAX 1001
const char INF = '#';
const int MM = 10000000;
typedef pair<int,int> P;
 
int num,d[MAX][MAX],n,m;
int dx[4] = {1,0,-1,0},dy[4] = {0,1,0,-1};
char field[MAX+1][MAX+1];
 
int bfs(int sy,int sx,int gy,int gx){
    queue<P> que;
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            d[i][j] = MM;
	}
    }
     
    que.push(P(sy,sx));
    d[sy][sx] = 0;
     
    while(que.size()){
        P p = que.front(); que.pop();
        if(p.first == gy && p.second == gx) break;
         
        for(int i = 0 ; i < 4 ; i++){
            int nx = p.first+dx[i];
            int ny = p.second+dy[i];
             
            if(0 <= nx && nx < n && 0 <= ny && ny < m && field[nx][ny] != 'X'
               &&d[nx][ny] == MM){
                que.push(P(nx,ny));
                d[nx][ny] = d[p.first][p.second]+1;
            }
        }
    }
     
    return d[gy][gx];
}
 
int main(){
    fill(field[0],field[MAX],INF);
 
    cin >> n >> m >> num;
    vector<P> v(num+1);
    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < m ; j++){
            cin >> field[i][j];
            if(field[i][j]=='S'){
                v[0].first = i;
                v[0].second = j;
            }
            if('0' <= field[i][j] && field[i][j] <= '9'){
                v[field[i][j]-'0'].first = i;
                v[field[i][j]-'0'].second = j;
            }
        }
    }
 
    int ans = 0;
    for(int i = 1 ; i < num+1 ; i++){
        ans += bfs(v[i-1].first,v[i-1].second,v[i].first,v[i].second);
    }
    cout << ans << endl;
 
    return 0;
}