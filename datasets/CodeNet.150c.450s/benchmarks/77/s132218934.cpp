#include <cstdio>
#include <iostream>
#include <cmath>
#include <ctype.h>
#include <string> 
#include <sstream>
#include <iostream>
#include <algorithm>
#include <cstdlib>
#include <map>
#include <queue>
#include <utility>
#include <vector>
#include <set>
 
using namespace std;

int main()
{
    int N;
    while(1){
        cin >> N;
        if(N == 0) break;
        int gemmap[21][21] = {0};
        int gem_x, gem_y;
        for(int i = 0; i < N; i++){
            cin >> gem_x >> gem_y;
            gemmap[gem_x][gem_y] = 1;
        }
        int M;
        cin >> M;
        char direction;
        int howfar;
        int now_x = 10, now_y = 10;
        int get_gem = 0;
        for(int i = 0; i < M; i++){
            cin >> direction >> howfar;
            if(direction == 'N'){
                for(int j = 1; j <= howfar; j++){
                    now_y++;
                    if(gemmap[now_x][now_y] == 1){
                        get_gem++;
                        gemmap[now_x][now_y] = 0;
                    }
                }
            }else if(direction == 'E'){
                for(int j = 1; j <= howfar; j++){
                    now_x++;
                    if(gemmap[now_x][now_y] == 1){
                        get_gem++;
                        gemmap[now_x][now_y] = 0;
                    }
                }
            }else if(direction == 'S'){
                for(int j = 1; j <= howfar; j++){
                    now_y--;
                    if(gemmap[now_x][now_y] == 1){
                        get_gem++;
                        gemmap[now_x][now_y] = 0;
                    }
                }
            }else if(direction == 'W'){
                for(int j = 1; j <= howfar; j++){
                    now_x--;
                    if(gemmap[now_x][now_y] == 1){
                        get_gem++;
                        gemmap[now_x][now_y] = 0;
                    }
                }
            }
        }
        if(get_gem == N) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
   return 0;
}