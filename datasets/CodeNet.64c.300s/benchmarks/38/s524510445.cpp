#include <algorithm>
#include <iostream>
#include <cstring>
#include <climits>
#include <cstdio>
#include <string>
#include <cmath>
#include <set>
#include <queue>
#include <map>
#include <vector>
#include <cstdlib>
#include <stack>
#include <time.h>
using namespace std;
typedef long long LL;
const int MOD = int(1e9)+7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1.0); //M_PI;
const int maxn = 100001;
int a[maxn];
int vis[maxn];

void dfs(int cur , int next)
{
    if(cur >= 10 || next >= 10) return ;
    else{
        if(a[cur] < a[next]){
             vis[next] = 1;
             dfs(next , next + 1);
        }
        else{
            dfs(cur , next + 1);
        }
    }
}

int main()
{
    #ifdef DoubleQ
    freopen("in.txt" , "r" , stdin);
    #endif
    int n;
    cin >> n;
    while(n --){
        for(int i = 0 ; i < 10 ; i ++){
            cin >> a[i];
        }
        int flag = 0;
        int y = 0;
        for(int i = 0 ; i < 10 ; i ++){
            memset(vis , 0 , sizeof(vis));
            vis[i] = 1;
            dfs(i , i + 1);
            int tp = -1;
            flag = 0;
            for(int j = 0 ; j < 10 ; j ++){
                if(vis[j] == 0){
                    if(a[j] > tp){
                        tp = a[j];
                    }
                    else{
                        flag = 1;
                        break;
                    }
                }
            }
            if(flag == 0)
            {
                
                y = 1;
                cout << "YES" << endl;
                break;
            }
        }
        if(y == 0) cout << "NO" << endl;
    }
}