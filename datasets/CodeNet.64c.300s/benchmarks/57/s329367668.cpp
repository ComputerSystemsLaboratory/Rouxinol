#include <algorithm>
#include <cstdio>
#include <iostream>
#include <map>
#include <cmath>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <vector>
#include <stdlib.h>
#include <stdio.h>
#include <bitset>
using namespace std;

#define PI         acos(-1.0)
#define FOR(I,A,B) for(int I = (A); I < (B); ++I)

typedef long long ll;

int main(){
    while(1){
        int R, C;
        cin >> R >> C;
        if(R == 0 && C == 0) break;

        bool osenbei[R][C]; // 1 no, 0 ok
        FOR(i,0,R) FOR(j,0,C) cin >> osenbei[i][j];

        // ??¨??¢?´¢
        int ans = 0;
        FOR(i,0,1<<R){
            int omote = 0;
            bool change[R];
            FOR(j,0,R) change[j] = false;
            FOR(j,0,R) if((i >> j) & 1) change[j] = true; // ?£???????
            FOR(j,0,C){
                int o = 0;
                FOR(ii,0,R) o += (osenbei[ii][j] ^ change[ii]) ? 0 : 1;
                omote += max(o, R - o);
            }
            ans = max(ans, omote);
        }
        cout << ans << endl;
    }
    return 0;
}