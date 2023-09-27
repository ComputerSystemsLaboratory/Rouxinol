#include <bits/stdc++.h>

using namespace std;

const double inf = (int)1e8;

int main(){
    int h, w, n;
    cin >> h >> w >> n;

    vector<string> field(h);
    int d[h][w];
    int mx, my;
    for(int i=0; i< h; i++){
        cin >> field[i];
        for(int j=0; j < field[i].size(); j++) if(field[i][j] == 'S'){mx = i; my = j; field[i][j] = '.';}
    }
    int count = 0;
    for(int i = 1; i <= n; i++){
        for(int j=0; j< h; j++)for(int k=0; k < w; k++) d[j][k] = inf;
        queue<pair<int, int>> q;
        q.push(make_pair(mx, my));
        d[mx][my] = 0;
        while(q.size()){
            pair<int, int> p = q.front(); q.pop();
            if(field[p.first].substr(p.second, 1) == to_string(i)){count += d[p.first][p.second]; mx = p.first; my = p.second; break;}
            int dx[4] = {1, 0, -1, 0};
            int dy[4] = {0, 1, 0, -1};
            for(int j=0; j < 4; j++){
                int nx = p.first+dx[j], ny = p.second+dy[j];
                if(0 <= nx && nx < h && 0 <= ny && ny < w && field[nx][ny] != 'X' && d[nx][ny] == inf){
                    q.push(make_pair(nx, ny));
                    d[nx][ny] = d[p.first][p.second] + 1;
                }
            }
        }
    }
    cout << count << endl;
}