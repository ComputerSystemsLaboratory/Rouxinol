#include <iostream>
#include <cstdio>
#include <stack>

using namespace std;

int H,W;
char field[100][100];


void dfs(int y, int x , char type){

    char cur_type = field[y][x];

    field[y][x] = '.';

    for(int dy = -1; dy<= 1; dy++){
        for(int dx = -1; dx<= 1; dx++){
            int nx = x + dx;
            int ny = y + dy;

            if( 0<= nx
                && nx < W
                && 0<= ny
                && ny < H
                && field[ny][nx] == cur_type
                && dx * dy == 0 ){
                dfs(ny,nx,cur_type);
            }
        }
    }
    return;
}


void solve(){
    int res = 0;
    for(int i = 0; i< H; i++){
        for(int j = 0; j< W; j++){
            if(field[i][j] != '.'){

                dfs(i,j,field[i][j]);

                res++;
            }
        }
    }
    cout << res << endl;
}



int main() {

    while(1){

        cin >> H >> W;cin.ignore();

        if( H == 0 && W == 0 ){
            break;
        }
        string line;

        for(int i = 0; i< H; i++){
            getline(cin,line);
            for(int j = 0; j< W; j++){
                field[i][j] = line[j];
            }
        }
        solve();

    }

    return 0;
}



/*
10 10
####*****@
@#@@@@@*#*
@##***@#@*
#****#*@**
##@*#@@*##
*@@@@*@@@#
***#@*@##*
*@@@*@@##@
*@*#*@##**
@****#@@*#
2 1
#
@
0 0
 */