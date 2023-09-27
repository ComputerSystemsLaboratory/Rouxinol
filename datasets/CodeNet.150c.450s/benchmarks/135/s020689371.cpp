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

int N, M, H[1501], W[1501];
std::map<int,int> sH;

int main(){
    while(std::cin >> N >> M, N){
        sH.clear();

        H[0] = 0;
        FOR(i, 1, N+1){
            std::cin >> H[i];
            H[i] += H[i-1];
        }

        REP(i, N+1){
            FOR(j, i+1, N+1){
                sH[H[j]-H[i]]++;
            }
        }

        W[0] = 0;
        FOR(i, 1, M+1){
            std::cin >> W[i];
            W[i] += W[i-1];
        }

        int res = 0;
        REP(i, M+1){
            FOR(j, i+1, M+1){
                res += sH[W[j]-W[i]];
            }
        }

        std::cout << res << std::endl;
    }
}