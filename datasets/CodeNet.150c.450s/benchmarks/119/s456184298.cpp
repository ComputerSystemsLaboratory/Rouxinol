#include <iostream>
#include <vector>

using namespace std;

int w = 0;
int h = 0;
vector<vector<int>> island;
vector<vector<bool>> reached;

void go(int x_pos, int y_pos);

int main()
{
    while(1){
        cin >> w >> h;
        if(w == 0) break;
        
        island.resize(h);        
        for(int i = 0; i < h; i++){
            island[i].resize(w);
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> island[i][j];
            }
        }

        reached.resize(h);
        for(int i = 0; i < h; i++){
            reached[i].resize(w);
        }
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                reached[i][j] = false;
            }
        }


        int count = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(island[i][j] == 1 && !reached[i][j]){
                    count++;
                    go(j, i);
                }
            }
        }
        
        cout << count << endl;
        
    }
    return 0;
}

void go(int x_pos, int y_pos)
{
    reached[y_pos][x_pos] = true;
    for(int dx = -1; dx <= 1; dx++){
        for(int dy = -1; dy <= 1; dy++){
            if(x_pos + dx >= 0 && x_pos + dx < w && y_pos + dy >= 0 && y_pos + dy < h){
                if(island[y_pos+dy][x_pos+dx] == 1 && !reached[y_pos+dy][x_pos+dx]){
                    go(x_pos+dx, y_pos+dy);
                }
            }
        }
    }
}