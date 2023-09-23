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

int main(){
    int N, M, P;
    while(std::cin >> N >> M >> P, N){
        int cn = 0;
        int X[101];

        FOR(i, 1, N+1){
            std::cin >> X[i];
            cn += X[i];
        }

        if(X[M] == 0){puts("0");}
        else{
            printf("%d\n", cn * (100 - P) / X[M]);
        }
    }
}