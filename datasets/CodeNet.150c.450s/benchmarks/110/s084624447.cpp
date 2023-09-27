#include <iostream>
#include <queue>
#include <stdlib.h>

using namespace std;

const int MAX_W = 1000;
const int MAX_H = 1000;
const int MAX_N = 9;

typedef pair<int, int> P;

int H,W,N;
char field[MAX_H][MAX_W];
int dist[MAX_H][MAX_W];

queue<P> que;

//using limits = std::numeric_limits<int>;

int limits = 99999;

void getStatus(int y, int x, int min_dist){
    for(int i = 0; i< H; i++) {
        for (int j = 0; j < W; j++) {
            if( i == y && j == x){
                cout << "$";
            }else {
                cout << field[i][j];
            }
        }
        cout << endl;
    }
    cout << "-------------min_dist:" << min_dist << endl;
}


int bfs(int goal){

    int gx,gy;

    while( que.size()){
        P p = que.front(); que.pop();
        int a = p.first;
        int b  = p.second;

        if( atoi(&field[p.first][p.second]) == goal ) { gy = p.first; gx = p.second; break; }

        int dx[4] = {1,0,-1,0}, dy[4] = {0,1,0,-1};

        for(int i=0; i< 4; i++){

            int ny = p.first + dy[i],
                nx = p.second+ dx[i];

            if( 0 <= nx
                && nx < W
                && 0<= ny
                && ny < H
                && field[ny][nx] != 'X'
                && dist[ny][nx] ==  limits ){

                que.push(P(ny,nx) );
                dist[ny][nx] = dist[p.first][p.second] + 1;

            }
        }
       // getStatus(p.first,p.second,dist[p.first][p.second]);
    }

    return dist[gy][gx];
}


void init_dist(){
    for(int i=0; i< H; i++){
        for(int j=0; j<W; j++){
            dist[i][j] = limits;
        }
    }
    while(que.size()){
        que.pop();
    }

}


void solve(){
    int sum = 0;
    for(int i = 0; i< H; i++){
        for(int j = 0; j< W; j++){

            if( field[i][j] == 'S'){
                init_dist();
                que.push(P(i,j));
                dist[i][j] = 0;
                sum += bfs(1);
            }

            for(int k = 1; k<N; k++){
                if( atoi(&field[i][j]) == k ) {
                    init_dist();
                    que.push(P(i,j));
                    dist[i][j] = 0;
                    sum+=bfs(k+1);
                }

            }
        }
    }

    cout << sum << endl;

}



int main() {

    //while(1){

        string line;
        cin >> H >> W >> N;cin.ignore();
        //if( H == 0 && W == 0 ){
        //    break;
        //}


        for(int i = 0; i< H; i++){
            getline(cin,line);
            for(int j = 0; j< W; j++){
                field[i][j] = line[j];
            }
        }

        solve();

    //}

    return 0;
}

/*
10 10 9
.X...X.S.X
6..5X..X1X
...XXXX..X
X..9X...X.
8.X2X..X3X
...XX.X4..
XX....7X..
X..X..XX..
X...X.XX..
..X.......
 */