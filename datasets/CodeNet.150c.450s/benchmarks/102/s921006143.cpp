#include <iostream>
using namespace std;

int w, h;
string inp[21];

const int MAX=23;
int room[MAX][MAX];
int cnt;

void init(){
    int i, j;
    for(i=0; i<MAX; i++){
        for(j=0; j<MAX; j++){
            room[i][j]=0;
        }
    }
    cnt = 0;
}

void dfs(int x, int y){
    cnt++;
    room[x][y]=0;
    if(room[x+1][y]){
        dfs(x+1,y);
    }
    if(room[x-1][y]){
        dfs(x-1,y);
    }
    if(room[x][y+1]){
        dfs(x,y+1);
    }
    if(room[x][y-1]){
        dfs(x,y-1);
    }
}

int main() {
    ios_base::sync_with_stdio(0);
    
    
    while(1){
        cin >> w >> h;
        
        if(w==0 && h==0)
            break;
        
        int i, j;
        int x=0, y=0;
        for(i=1; i<=h; i++){
            cin >> inp[i];
            for(j=0; j<w; j++){
                switch(inp[i][j]){
                    case '.':
                        room[j+1][i]=1;
                        break;
                    case '#':
                        room[j+1][i]=0;
                        break;
                    case '@':
                        room[j+1][i]=1;
                        x=j+1;
                        y=i;
                        break;
                }
            }
        }
        
        dfs(x, y);
        cout << cnt << endl;
        
        init();
    }
    return 0;
}