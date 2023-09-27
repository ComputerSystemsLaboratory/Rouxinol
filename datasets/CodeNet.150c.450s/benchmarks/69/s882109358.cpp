#include <map>
#include <set>
#include <queue>
#include <deque>
#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <cstdlib>
#include <cstring>
#include <utility>
#include <iostream>
#include <algorithm>
using namespace std;
bool flag;
int ball[15];
bool dfs(int x, int l, int r){
    if(ball[x] > l){
        if(x == 9) return true;
        if(dfs(x+1, ball[x], r)) return true;
    }
    if(ball[x] > r){
        if(x == 9) return true;
        if(dfs(x+1, l, ball[x])) return true;
    }
    return false;
}
int main(){
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    while(n--){
        for(int i = 0; i < 10; ++i) cin >> ball[i];
        bool flag = dfs(0, 0, 0);
        cout << (flag ? "YES" : "NO") << endl;
    }
    return 0;
}