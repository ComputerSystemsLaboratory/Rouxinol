#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;
int H, W, N;

char world[1002][1002];

pair<int, int> S;


vector<pair<int, int> > getNeighbors(pair<int, int> xs){
    vector<pair<int, int> > v;
    int dx[4] = {1, 0, -1, 0};
    int dy[4] = {0, 1, 0, -1};
    for(int i = 0; i < 4; i++){
        int nx = dx[i] + xs.first;
        int ny = dy[i] + xs.second;
        if (world[nx][ny] != 'X') {
            v.push_back(pair<int, int>(nx, ny));
        }
    }
    return v;
}

bool isAbnormal(vector<vector<bool> >& trails, const pair<int, int>& xs){
    if (trails[xs.first][xs.second]){
        return false;
    }else{
        trails[xs.first][xs.second] = true;
        return true;
    }
}

// pair<int, pair<int, int> > solve(char goal, const vector<pair<int, int> >& v, int depth){
//     vector<pair<int, int> > v2;
//     vector<vector<bool> > trails = vector<vector<bool> >(H + 2, vector<bool>(W + 2, false));

//     for(auto target: v){
//         vector<pair<int, int> > neighbors = getNeighbors(target);
//         for(auto x: neighbors){
//             if (world[x.first][x.second] == goal) {
//                 return pair<int, pair<int, int> >(depth + 1, x);
//             }
//             if (isAbnormal(trails, x)){
//                 v2.push_back(x);
//             }
//         }
//     }
//     return solve(goal, v2, depth + 1);
// }

pair<int, pair<int, int> > solve(char goal, pair<int, int> s){
    vector<pair<int, int> >  v2;
    vector<vector<bool> > trails = vector<vector<bool> >(H + 2, vector<bool>(W + 2, false));

    queue<pair<int, pair<int, int> > > q;
    q.push(pair<int, pair<int, int> >(0, s));

    pair<int, pair<int, int> > target;
    while(true){
        target = q.front();
        q.pop();
        
        int depth = target.first;
        pair<int, int> xy = target.second;
        
        vector<pair<int, int> > neighbors = getNeighbors(xy);
        for(auto neighbor: neighbors){
            int x = neighbor.first;
            int y = neighbor.second;
            if (world[x][y] == goal) {
                return pair<int, pair<int, int> >(depth + 1, neighbor);
            }
            if (isAbnormal(trails, neighbor)){
                q.push(pair<int, pair<int, int> >(depth + 1, neighbor));
            }
        }
    }
}

    


void input(){
    cin >> H >> W >> N;
    for(int i = 1; i < H + 1; i++){
        for (int j = 1; j < W + 1; j++) {
            cin >> world[i][j];
            if (world[i][j] == 'S') {
                S = pair<int, int>(i, j);
            }
        }
    }
}

void init(){
    for (int j = 0; j < W + 2; j++) {
        world[0][j] = 'X';
        world[H + 1][j] = 'X';
    }
    for (int i = 0; i < H + 2; i++) {
        world[i][0] = 'X';
        world[i][W + 1] = 'X';
    }
}

int main (int argc, char* argv[]){
    input();

    init();
    
    int sum = 0;
    for (char g = '1'; g < '1' + N; g++){
        pair<int, pair<int, int> > res = solve(g, S);
        sum += res.first;
        S = res.second;
    }

    cout << sum << endl;

    return 0;
}