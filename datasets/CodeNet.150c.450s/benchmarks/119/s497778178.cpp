#include<iostream>
#include<vector>
#include<algorithm>

#define REP(i,n) for(int i=0;i<(n);i++)

using namespace std;
int field[50][50];
int w, h;

void dfs(int i, int j){
    field[i][j] = 0;
    for(int di=-1; di<=1; di++){
        for(int dj=-1; dj<=1; dj++){
            int ni = i+di;
            int nj = j+dj;
            if(field[ni][nj]==1 && 0 <= ni && ni < h &&
                    0 <= nj && nj < w){
                dfs(ni,nj);
            }
        }
    }
    return;
}

int main(){
    while(cin >> w >> h){
        if(w==0 && h==0) break;
        REP(i,h){
            REP(j,w){
                cin >> field[i][j];
            }
        }

        int cnt = 0;
        REP(i,h){
            REP(j,w){
                if(field[i][j] == 1){
                    dfs(i,j);
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }

    return 0;
}