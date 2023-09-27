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

const int INF = 1 << 30;
// S N E W(南北東西)
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1}, dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

typedef long long ll;
typedef unsigned long long ull;
typedef std::pair<int,int> P;
typedef std::pair<int,P> State;

const int B = 320, MAX_N = 100000;

int A[MAX_N], buckets[MAX_N/B];

int sum(int l, int r){
    int res = 0;
    while(l < r && l % B > 0){res += A[l++];}
    while(l < r && r % B > 0){res += A[--r];}
    while(l < r){
        res += buckets[l/B];
        l += B;
    }

    return res;
}

int main(){
    int N, K;
    while(std::cin >> N >> K, N){
        REP(i, N){
            std::cin >> A[i];
            buckets[i/B] += A[i];
        }

        int res = -INF;
        REP(i, N){
            if(i+K <= N){
                res = std::max(res, sum(i, i+K));
            }
        }

        std::cout << res << std::endl;
    }
}