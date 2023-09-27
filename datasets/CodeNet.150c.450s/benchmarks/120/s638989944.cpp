#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <queue>
#include <numeric>
#include <string>
#include <iostream>
#include <string.h>
#include <map>
#include <set>
#include <functional>

using namespace std;

const int INF = (1<<30) - 1;

int senbei[10][10000];

int main(){
	ios::sync_with_stdio(false);
    int R, C;
    while(cin >> R >> C, R|C){
        for(int i=0; i<R; i++)
            for(int j=0; j<C; j++)
                cin >> senbei[i][j];
        int ans = 0;
        for(int p=0; p<(1<<R); p++){
            int tans = 0;
            for(int i=0; i<C; i++){
                int cnt = 0;
                for(int j=0; j<R; j++)
                    cnt += senbei[j][i] ^ (p>>j&1);
                tans += max(cnt, R-cnt);
            }
            ans = max(ans, tans);
        }
        cout << ans << endl;
    }
        
	return 0;
}