#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <string>
#include <map>
#include <queue>
#include <stack>
#include <algorithm>

#define rep(i,j) REP((i), 0, (j))
#define REP(i,j,k) for(int i=(j);(i)<(k);++i)
#define between(a,x,b) ((a)<=(x)&&(x)<=(b))
#define INF 1 << 30
#define S second
#define F first
using namespace std;

int main(){
    int n, h1, h2, m1, m2, s1, s2;
    char str1[16], str2[16];
    while(scanf("%d", &n) && n){
        vector<pair<int, int> >time(n*2);
        rep(i, n){
            int a = 0, b = 0;
            pair<int, int>tmp;
            scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
            a = h1 * 3600 + m1 * 60 + s1;
            b = h2 * 3600 + m2 * 60 + s2;
            time[i*2] = make_pair(a, 1);
            time[i*2+1] = make_pair(b, 0);
        }
        sort(time.begin(), time.end());
        int res = 0, cnt = 0;
        rep(i, time.size()){
            if(time[i].S){
                cnt++;
                res = max(res, cnt);
            }
            else cnt--;
        }
        
        printf("%d\n", res);
    }
    return 0;
}