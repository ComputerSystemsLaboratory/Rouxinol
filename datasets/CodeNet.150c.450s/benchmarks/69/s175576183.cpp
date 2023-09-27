#include <iostream>
#include <algorithm>
#include <string>
#include <ctime>
#include <cmath>
#include <queue>
#include <vector>
#include <set>
#include <cstring>
#define MAXN 210
using namespace std;

bool flag;
int arr[MAXN];

void dfs(int x1, int y1, int x2, int y2, int cnt){
    if(x2 < x1 || y2 < y1)
        return;
    if(cnt == 10) {
        flag = true;
        return;
    }
    dfs(x2, y1, arr[cnt], y2, cnt + 1);
    dfs(x1, y2, x2, arr[cnt], cnt + 1);
}

int main(){
    int T;
    cin >> T;
    while(T--){
        for(int i = 0; i < 10; ++i)
            cin >> arr[i];
        flag = false;
        dfs(0, 0, 0, 0, 0);
        if(flag)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}