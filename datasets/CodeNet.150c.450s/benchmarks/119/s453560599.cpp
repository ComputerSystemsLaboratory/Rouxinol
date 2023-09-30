#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int n;
vector<vector<int> > C;
vector<vector<int> > D;

void bfs(int initCX, int initCY){
    queue<int> Q;
    Q.push(initCX);
    Q.push(initCY);
    D[initCX][initCY] = 0; // ?????????
    while(!Q.empty()){
        // ??????????´???????????????????
        int cx, cy;
        cx = Q.front();
        Q.pop();
        cy = Q.front();
        Q.pop();
        for(int i = -1; i <= 1; ++i){
            for(int j = -1; j <= 1; ++j){ // ??????????????????????????????
                if(C[cx + i][cy + j] == 1 && D[cx + i][cy + j] == -1){ // ???????????£??????????¨??????????
                    D[cx + i][cy + j] = D[cx][cy] + 1;
                    // ????????????????¨??????????????????????
                    Q.push(cx + i);
                    Q.push(cy + j);
                }
            }
        }
    }
}

int main(){
    int w, h;
    // index?????????????°???????????????£????????§???????????§h??¨w?????\?????????????????????????????????????????????????????????
    while(cin >> h >> w, w != 0 || h != 0){
        C = vector<vector<int> >(w+2, vector<int>(h+2, 0));
        for(int i=1; i<=w; ++i){
            for(int j=1; j<=h; ++j){
                cin >> C[i][j];
            }
        }
        D = vector<vector<int> >(w+2, vector<int>(h+2, 0));
        for(int i=1; i<=w; ++i){
            for(int j=1; j<=h; ++j){
                D[i][j] = -1;
            }
        }
        int n = 0;
        for(int i=1; i<=w; ++i){
            for(int j=1; j<=h; ++j){
                if(C[i][j] == 1 && D[i][j] == -1){ // ???????????£??????????¨??????????
                    bfs(i, j);
                    ++n;
                }
            }
        }
        cout << n << endl;
    }
}