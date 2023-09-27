#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <cctype>

#include <iostream>
#include <vector>
#include <deque>
#include <queue>
#include <map>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < n; i++)
#define repi(i,l,n) for(int (i)=(int)(l);(i)<(int)(n);(i)++)
#define d_arr(arr, h, w) rep(i,(h) ){ cout << "["; rep(j,(w) ) { cout << (arr)[i][j] << ", "; } cout << "]" << endl;}
#define IN(x,s,g) ((x) >= (s) && (x) < (g))
#define ISIN(x,y,w,h) (IN((x),0,(w)) && IN((y),0,(h)))
#define print(x) printf("%d\n",x);
#define fs first
#define sc second

typedef pair<int ,int> P;

char grid[20][20];
bool arrived[20][20];
int dx[4] ={1,0,-1,0};
int dy[4] ={0,1,0,-1};
int w,h;

//i,jから初めて到達可能なタイルの数の最大値(i,j)含む
void rec(int i,int j){
//    printf("i:%d j:%d\n",i,j);
    arrived[i][j] = true;
    grid[i][j] = '#';
    int ret = 0;
    rep(k,4) {
        int next_j = j+dx[k];
        int next_i = i+dy[k];
        if( next_j < w && 0 <= next_j &&
            next_i < h && 0 <= next_i &&
            grid[next_i][next_j] == '.')
        {
            rec(next_i,next_j);
        }
    }
}

int main()
{
    P start;
    while(1){
        cin >> w >> h;
        if( w==0 && h==0 ) {break;}
        rep(i,20) rep(j,20) arrived[i][j] = false;
        rep(i,h){
            rep(j,w){
                cin >> grid[i][j];
                if( grid[i][j] == '@' ){ start.first=i;start.second=j; }
            }
        }
        rec(start.first,start.second);
        int ret=0;
        rep(i,20){
            rep(j,20){
                if(arrived[i][j] == true ){
                    ret+=1;
                }
            }
        }
        cout << ret << endl;
    }
}