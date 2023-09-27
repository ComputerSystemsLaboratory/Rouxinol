#include "bits/stdc++.h"
typedef long long ll;
#define int ll
#define rep(i,n) for(int i = 0;i < (n) ; i++) 
#define MP(a,b) make_pair(a,b)
#define pb(a) push_back(a)
#define INF LLONG_MAX/2
using namespace std;
int MOD = 1000000007;

signed main(){

    int ban[10][5] = {0};
    int h;
    while(1){
        cin >> h;
        // cerr << 1  << endl;
        if(h == 0)break;
        int score = 0;
        for(int i = h-1;i >= 0;i--){
            for(int j = 0;j<5;j++){
                cin >> ban[i][j];
            }
        }
        // cerr << 2  << endl;
        while(1){
            int update = 0;
            for(int i = 0;i < h;i++){
                int era[5] = {0};
                if(ban[i][0] == ban[i][1] && ban[i][1] == ban[i][2] && ban[i][2] != 0){
                    era[0] = era[1] = era[2] = 1;
                    update = 1;
                }
                if(ban[i][1] == ban[i][2] && ban[i][2] == ban[i][3] && ban[i][2] != 0){
                    era[3] = era[1] = era[2] = 1;
                    update = 1;
                }
                if(ban[i][3] == ban[i][4] && ban[i][2] == ban[i][3] && ban[i][2] != 0){
                    era[4] = era[3] = era[2] = 1;
                    update = 1;
                }
                for(int j = 0;j < 5;j++){
                    if(era[j]){
                        score += ban[i][j];
                        ban[i][j] = 0;
                    }
                }
            }
            for(int i = 1;i < h;i++){
                rep(j,5){
                    int x = i;
                    while(1){
                        if(x == 0 || ban[x][j] == 0 || ban[x-1][j] != 0)break;
                        ban[x-1][j] = ban[x][j];
                        ban[x][j] = 0;
                        x--;
                    }
                }
            }
            if(update == 0)break;
        }
        cout << score << endl;
    }
    return 0;
}

// g++ -std=c++14 icpc2014_a.cpp
// rm -r -f test;oj dl https://cf17-final-open.contest.atcoder.jp/tasks/cf17_final_a
// rm -r -f test;oj dl http://agc034.contest.atcoder.jp/tasks/agc034_b

