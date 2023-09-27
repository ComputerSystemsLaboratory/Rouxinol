#include <iostream>
#include <cstdio>
#include <cmath>
#include <vector>
#include <algorithm>
#include <string>
#include <set>
#include <map>
#include <queue>
#include <cstring>
using namespace std;
typedef long long int ll;
const int INF = 1000000000;
#define rep(i,n) for(int i=0;i<(int)(n);i++)
int wf[10][10];
int main(){
    for(int e; cin >> e;){
        if(e == 0) return 0;
        rep(i, 10) rep(j, 10)
          if(i == j) wf[i][j] = 0; else wf[i][j] = INF;
        set <int> town;
        rep(i, e){
            int x, y, z;
            scanf("%d%d%d", &x, &y, &z);
            wf[x][y] = wf[y][x] = z;
            town.insert(x); town.insert(y);
        }
        int n = town.size();
        rep(k, n) rep(i, n) rep(j, n)
          wf[i][j] = min(wf[i][j], wf[i][k] + wf[j][k]);
        int nans = 0, tans = INF;
        rep(i, n){
            int temp = 0;
            rep(j, n) temp += wf[i][j];
            if(tans > temp){
                tans = temp;
                nans = i;
            }
        }
        cout << nans << " " << tans << endl;
    }
    return 0;
}