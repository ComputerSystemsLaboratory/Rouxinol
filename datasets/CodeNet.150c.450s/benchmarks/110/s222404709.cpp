/*
* @Author: key
* @Date:   2016-03-07 20:53:16
* @Last Modified by:   key
* @Last Modified time: 2016-03-07 22:13:15
*/

#include <iostream>
#include <queue>
#define MAX 1005
#define INF 100000000

using namespace std;

typedef struct{
    int x;
    int y;
    int state;
} Mouse;

int H,W,N;
int start_x,start_y;
char ar[MAX][MAX];
int offset_x[4] = {1,0,-1,0};
int offset_y[4] = {0,1,0,-1};
int ans[MAX][MAX];

void init(){
    for(int i = 0; i < H; i++)
        for(int j = 0; j < W; j++)
            ans[i][j] = -INF;
}

void bfs(){

    Mouse m;
    m.x = start_x;
    m.y = start_y;
    m.state = 1;

    init();

    ans[start_y][start_x] = 0;

    queue<Mouse> q;
    q.push(m);

    while(q.size()){
        Mouse m1 = q.front();
        q.pop();
        for(int i = 0; i < 4; i++){
            int dx = m1.x + offset_x[i];
            int dy = m1.y + offset_y[i];
            bool flag = true;
            if(dx >= 0 && dx < W && dy >= 0 && dy < H && ar[dy][dx] != 'X' && ans[dy][dx] == -INF){
                Mouse m2;
                m2.x = dx;
                m2.y = dy;

                ans[dy][dx] = ans[m1.y][m1.x] + 1;

                if(m1.state == (ar[dy][dx] - '0')){
                    int temp = ans[m1.y][m1.x] + 1;
                    init();
                    ans[dy][dx] = temp;
                    m2.state = m1.state + 1;

                    if(m1.state == N){
                        cout << ans[dy][dx] << endl;
                        return;
                    }
                    ar[dy][dx] == '.';
                    while(!q.empty()){
                        q.pop();
                    }
                    flag = false;
                }else{
                    m2.state = m1.state;
                }
                q.push(m2);
                if(!flag) break;
            }
        }
    }




}



int main(){

    while(cin >> H >> W >> N){
        for(int i = 0; i < H; i++){
            cin >> ar[i];
            for(int j = 0; j < W; j++){
                if(ar[i][j] == 'S'){
                    start_y = i;
                    start_x = j;
                }
            }
        }
        bfs();
        break;
    }

 return 0;
}