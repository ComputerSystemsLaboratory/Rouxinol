#include <iostream>
using namespace std;
int w, h, cnt;
int c[51][51];
void dfs(int i, int j){
    if(i-1 >= 0 && j-1 >= 0){
        if(c[i-1][j-1] == 1){
            c[i-1][j-1] = 0;
            dfs(i-1,j-1);
        }
    }
    if(i-1 >= 0){
        if(c[i-1][j] == 1){
            c[i-1][j] = 0;
            dfs(i-1,j);
        }
    }
    if(i-1 >= 0 && j+1 < w){
        if(c[i-1][j+1] == 1){
            c[i-1][j+1] = 0;
            dfs(i-1,j+1);
        }
    }
    if(j-1 >= 0){
        if(c[i][j-1] == 1){
            c[i][j-1] = 0;
            dfs(i,j-1);
        }
    }
    if(j+1 < w){
        if(c[i][j+1] == 1){
            c[i][j+1] = 0;
            dfs(i,j+1);
        }
    }
    if(i+1 < h && j-1 >= 0){
        if(c[i+1][j-1] == 1){
            c[i+1][j-1] = 0;
            dfs(i+1,j-1);
        }
    }
    if(i+1 < h){
        if(c[i+1][j] == 1){
            c[i+1][j] = 0;
            dfs(i+1,j);
        }
    }
    if(i+1 < h && j+1 < w){
        if(c[i+1][j+1] == 1){
            c[i+1][j+1] = 0;
            dfs(i+1,j+1);
        }
    }

}

int main(void){
    while(1){
        cin >> w >> h;
        if(w == 0 && h == 0)    break;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                cin >> c[i][j];
            }
        }

        cnt = 0;
        for(int i = 0; i < h; i++){
            for(int j = 0; j < w; j++){
                if(c[i][j] == 1){
                    dfs(i, j);    
                    cnt++;
                }
            }
        }
        cout << cnt << endl;
    }
    return 0;
}
