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

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int,int> P;
typedef std::pair<int,P> State;

const int INF = 1001001001;

// S N E W(南北東西)
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1}, dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

int popCount(ll n){
    n = (n & 0x5555555555555555) + (n >>  1 & 0x5555555555555555);
    n = (n & 0x3333333333333333) + (n >>  2 & 0x3333333333333333);
    n = (n & 0x0f0f0f0f0f0f0f0f) + (n >>  4 & 0x0f0f0f0f0f0f0f0f);
    n = (n & 0x00ff00ff00ff00ff) + (n >>  8 & 0x00ff00ff00ff00ff);
    n = (n & 0x0000ffff0000ffff) + (n >> 16 & 0x0000ffff0000ffff);
    n = (n & 0x00000000ffffffff) + (n >> 32 & 0x00000000ffffffff);
    return n;
}

int main(){
    int P, N;
    while(std::cin >> N >> P, P || N){
        ll isEmpty = 0;
        int stones[50], pos = 0;
        std::fill(stones, stones+50, 0);

        while(!(popCount(isEmpty) == N - 1 && P == 0)){
            if(P > 0){
                P -= 1;
                stones[pos] += 1;
                isEmpty &= ~(1LL << pos);
            }else{
                P += stones[pos];
                stones[pos] = 0;
                isEmpty |= 1LL << pos;
            }
            pos = (pos + 1) % N;
        }
        // REP(i, N){
        //     printf("%d ", stones[i]);
        // }
        // puts("");

        REP(i, N){
            if(isEmpty >> i & 1){continue;}
            printf("%d\n", i);
            break;
        }
    }
}