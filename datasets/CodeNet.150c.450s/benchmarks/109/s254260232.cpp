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

int a[86401];

int toSeconds(int h, int m, int s){
    return h*3600 + m*60 + s;
}

int main(){
    int N;
    while(std::cin >> N, N){
        std::fill(a, a+86401, 0);
        REP(i, N){
            int h1, m1, s1, h2, m2, s2;
            scanf("%2d%*c%2d%*c%2d %2d%*c%2d%*c%2d", &h1, &m1, &s1, &h2, &m2, &s2);

            int t1 = toSeconds(h1, m1, s1),
                t2 = toSeconds(h2, m2, s2);

            a[t1]++;
            a[t2]--;
        }

        int res = a[0];
        FOR(i, 1, 86401){
            a[i] += a[i-1];
            res = std::max(res, a[i]);
        }

        std::cout << res << std::endl;
    }
}