#include <iostream>
#include <string>

using namespace std;

string fld[21];
int w,h;
bool flg[21][21];
int ans;

void solve(int x, int y){
    if(flg[y][x]||fld[y][x]=='#'){
        return;
    }

    ans++;
    flg[y][x] = true;

    int dx[] = {1,-1,0,0};
    int dy[] = {0,0,1,-1};

    for(int i=0;i<4;i++){
        int nx = x+dx[i];
        int ny = y+dy[i];
        if(nx<0||nx>=w||ny<0||ny>=h){
            continue;
        }

        solve(nx, ny);
    }
}


int main(){
    while(cin>>w>>h,w!=0){
        for(int i=0;i<21;i++){
            for(int k=0;k<21;k++){
                flg[k][i] = false;
            }
        }
        ans = 0;

        for(int y=0;y<h;y++){
            cin >> fld[y];
        }

        int sx,sy;
        for(int y=0;y<h;y++){
            for(int x=0;x<w;x++){
                if(fld[y][x]=='@'){
                    sx = x;
                    sy = y;
                }
            }
        }

        solve(sx, sy);
        cout << ans << endl;
    }
    return 0;
}