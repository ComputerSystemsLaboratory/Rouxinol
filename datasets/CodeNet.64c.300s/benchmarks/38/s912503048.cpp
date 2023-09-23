#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
#include <map>
#include <stack>
using namespace std;
const int maxn = 10001;
int a[maxn];
int vis[maxn];
void dfs(int pre , int cur)
{
    if(cur < 10 && a[pre] < a[cur])
    {
        vis[cur] = 1;
        dfs(cur , cur + 1);
    }
    else if(cur < 10 && a[pre] > a[cur]){
        dfs(pre , cur + 1);
    }
}

int main()
{
    #ifdef DoubleQ
    freopen("in.txt" , "r" , stdin);
    #endif // DoubleQ
    int n;
    cin >> n;
    while(n --){
        for(int i = 0 ; i < 10 ; i ++){
            cin >> a[i];
        }
        bool flag = false;
        for(int i = 0 ; i < 10 ; i ++){
            memset(vis , 0 , sizeof(vis));
            vis[i] = 1;
            dfs(i , i + 1);
            int pre = 0;
            for(int j = 0 ; j < 10 ; j ++){
                if(vis[j] == 0){
                    if(pre > a[j]){
                        flag = true;
                        break;
                    }
                    else pre = a[j];
                }
            }
            if(!flag){
                cout << "YES" << endl;
                break;
            }
        }
        if(flag) cout << "NO" << endl;

    }
}