#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <algorithm>
#include <iostream>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
const int maxn = 101;
char g[maxn][maxn];
int d[4][2] = {0 , 1 , 1 , 0 , 0 , -1 , -1 ,0};
void dfs(int si , int sj , int n , int m , char ch)
{
    g[si][sj] = '1';
    for(int i = 0 ; i < 4 ; i ++){
        int x = si + d[i][0];
        int y = sj + d[i][1];
        if(x < 0 || x >= n || y < 0 || y >= m || g[x][y] != ch) continue;
        dfs(x , y , n , m , ch);
    }
}

int main()
{
    #ifdef DoubleQ
    freopen("in.txt" , "r" , stdin);
    #endif // DoubleQ
    int n , m;
    while(cin >> n >> m){
        if(n == 0 && m == 0) break;

        string str;
        for(int i = 0 ; i < n ; i ++){
            cin >> str;
            for(int j = 0 ; j < m ; j ++){
                g[i][j] = str[j];
            }
        }
        int cnt = 0;
        /*
        for(int i = 0 ; i < n ;i ++){
            for(int j = 0 ; j < m ; j ++){
                cout << g[i][j] << " ";
            }
            cout << endl;
        }
        */

        for(int i = 0 ; i < n ; i ++){
            for(int j = 0 ; j < m ; j ++){
                if(g[i][j] != '1'){
                    dfs(i , j , n , m , g[i][j]);
                    cnt ++;
                }
            }
        }
        cout << cnt << endl;

    }
}