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
// S N E W(南北東西)
const int dx[8] = {0, 0, 1, -1, 1, 1, -1, -1}, dy[8] = {1, -1, 0, 0, 1, -1, 1, -1};

typedef unsigned long long ull;
typedef std::pair<int,int> P;
typedef std::pair<int,P> State;

int main(){
    int N, L;
    while(std::cin >> N >> L, N || L){
        int a[21];
        a[0] = N;

        P res = mp(-1, -1);
        for(int i=1;!~res.first;i++){
            std::string s = std::to_string(N);

            while(s.size() < L){
                s += "0";
            }
        
            int min, max;
            std::sort(s.begin(), s.end());
            min = std::stoi(s);
            std::reverse(s.begin(), s.end());
            max = std::stoi(s);

            N = max - min;
            if(i <= 20){a[i] = N;}
            
            for(int j=0;j<=std::min(20,i-1);j++){
                if(N == a[j]){res = mp(j, i); break;}
            }
        }

        printf("%d %d %d\n", res.first, a[res.first], res.second-res.first);
    }
}