/*
    Zeolim - An AC a day keeps the bug away
*/

//pragma GCC optimize(2)
#include <cstdio>
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <cctype>
#include <string>
#include <cstring>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
#include <sstream>
#include <map>
#include <ctime>
#include <vector>
#include <fstream>
#include <list>
#include <iomanip>
#include <numeric>
using namespace std;
typedef long long ll;

const int MAXN = 1e3 + 10;

char arr[MAXN][MAXN];

signed used[MAXN][MAXN];

int ans = 1, n, m;

void dfs(int x, int y, char c)
{
    if(!(x >= 1 && x <= n && y >= 1 && y <= m && used[x][y] == -1 && arr[x][y] == c) )
        return ;

    used[x][y] = ans;

    dfs(x + 1, y, c);
    dfs(x - 1, y, c);
    dfs(x, y + 1, c);
    dfs(x, y - 1, c);   
}

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);     cout.tie(0);
    //freopen("D://test.in", "r", stdin);
    //freopen("D://test.out", "w", stdout);
    
    //n åˆ— m è¡Œ
    
    while(cin>>n>>m && n && m)
    {
	    for(int i = 1; i <= n; i++)
	        for(int j = 1; j <= m; j++)
	            cin>>arr[i][j];
	        
	    memset(used, -1, sizeof(used));
	    
	    ans = 0;
	        
	    for(int i = 1; i <= n; i++)
	    {
	        for(int j = 1; j <= m; j++)
	        {
	            if(used[i][j] == -1)
	            {
	                dfs(i, j, arr[i][j]);
	                ans++;
	            }
	        }
	
	    }
	    
	    cout<<ans<<endl;
	}

    

    return 0;
}
