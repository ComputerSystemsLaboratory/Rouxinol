#include<cstdio>
#include<cstring>
#include<iostream>
 
#define FOR(i,a,b) for(i=(a);i<(b);i++)
#define REP(i,j) FOR(i,0,j)
 
const int dx[4] = {0, 0, 1, -1}, dy[4] = {1, -1, 0, 0};
 
int main(){
    int N;
    while(scanf("%d", &N), N){
        int map[21][21];
        memset(map, 0, sizeof(map));
 
        int i, j;
        REP(i, N){
            int x, y;
            scanf("%d %d", &x, &y);
 
            map[y][x] = 1;
        }
 
        int m;
        scanf("%d", &m);
 
        int x = 10, y = 10, res = map[10][10];
        REP(i, m){
            char d;
            int l;
            std::cin >> d >> l;
         
            if(d == 'N'){
                d = 0;
            }else if(d == 'S'){
                d = 1;
            }else if(d == 'E'){
                d = 2;
            }else{
                d = 3;
            }
 
            REP(j, l){
                x += dx[d];
                y += dy[d];
 
                res += map[y][x];
                map[y][x] = 0;
            }
        }
 
        if(res == N){
            puts("Yes");
        }else{
            puts("No");
        }
    }

    return 0;
}