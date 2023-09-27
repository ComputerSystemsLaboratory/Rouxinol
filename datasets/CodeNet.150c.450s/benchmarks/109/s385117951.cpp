#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
using namespace std;

int main(){
    int n;
    while(true){
        scanf("%d", &n);
        if(n == 0) break;
        int par[100000];
        fill(par, par + 100000, 0);
        for(int _ = 0; _ < n; _++){
            int h, m, s;
            scanf("%d:%d:%d", &h, &m, &s);
            par[3600 * h + 60 * m + s] += 1;
            scanf("%d:%d:%d", &h, &m, &s);
            par[3600 * h + 60 * m + s] -= 1;
        }
        int acc = 0, ans = 0;
        for(int i = 0; i < 100000; i++){
            acc += par[i];
            ans = max(ans, acc);
        }
        printf("%d\n", ans);
    }
    return 0;
}