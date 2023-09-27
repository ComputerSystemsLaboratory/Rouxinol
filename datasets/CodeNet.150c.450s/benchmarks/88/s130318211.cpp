#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
#include <queue>
#include <algorithm>
#include <set>

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,j) FOR(i,0,j)
#define mp std::make_pair

const int INF = 1 << 24;
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1}, dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

typedef unsigned long long ull;
typedef std::pair<int,int> P;

int H, W;

int main(){
    while(std::cin >> H >> W, H){
        int diag = H*H + W*W;

        int res_x = -1, res_y = -1;
        // 対角線が同じとき
        for(int h=H+1;h<=150&&!~res_y;h++){
            for(int w=h+1;w<=150;w++){
                int d = w*w+h*h;
                if(d != diag){continue;}
                res_y = h;
                res_x = w;
                break;
            }
        }

        if(~res_y){
            std::cout << res_y << " " << res_x << std::endl;
        }else{
            // 対角線が長いとき
            for(int h=1;h<=150;h++){
                for(int w=h+1;w<=150;w++){
                    int d = w*w+h*h;
                    if(diag >= d){continue;}
                    if(!~res_y || d < res_x*res_x+res_y*res_y ||
                       (d == res_x*res_x+res_y*res_y && h < res_y)){
                        res_y = h;
                        res_x = w;
                    }
                }
            }
            std::cout << res_y << " " << res_x << std::endl;
        }
    }
    return 0;
}