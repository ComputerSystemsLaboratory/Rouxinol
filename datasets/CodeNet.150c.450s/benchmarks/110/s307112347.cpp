#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>

//ios::sync_with_stdio(false);

using namespace std;

const int INF = (1<<30) - 1;

int dh[] = {0, 0, 1, -1};
int dw[] = {1, -1, 0, 0};

int bfs(vector<string>& field, pair<int, int> start, pair<int, int> end){
    int H = field.size();
    int W = field[0].size();
    vector<vector<int> > d(H, vector<int>(W, INF));
    queue<pair<int, int> > nodes;
    
    d[start.first][start.second] = 0;
    nodes.push(start);
    
    while(!nodes.empty()){
        auto node = nodes.front(); nodes.pop();
        for(int i=0; i<4; i++){
            int nh = dh[i] + node.first;
            int nw = dw[i] + node.second;
            
            if(0<=nh&&nh<H && 0<=nw&&nw<W && field[nh][nw] != 'X' && d[nh][nw] == INF){
                d[nh][nw] = d[node.first][node.second] + 1;
                
                if(nh == end.first && nw == end.second)
                    return d[nh][nw];
                
                nodes.push(make_pair(nh, nw));
            }
        }
    }
    return -1;
}

int main(){
    int H, W, N;
    cin >> H >> W >> N;
    
    vector<string> field(H);
    for(int i=0; i<H; i++)
        cin >> field[i];
    
    vector<pair<int, int> > cheeses(N+1);
    
    for(int i=0; i<H; i++){
        for(int j=0; j<W; j++){
            char& c = field[i][j];
            if(c == 'S'){
                cheeses[0] = make_pair(i, j);
            }else if(c != '.' && c != 'X'){
                cheeses[c-'0'] = make_pair(i, j);
            }
        }
    }
    
    
    int ans = 0;
    for(int i=0; i<N; i++){
        ans += bfs(field, cheeses[i], cheeses[i+1]);
    }
    
    cout << ans << endl;
    
	return 0;
}