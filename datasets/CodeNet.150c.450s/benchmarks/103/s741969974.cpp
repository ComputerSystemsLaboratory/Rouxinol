#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1e+9;

int cnt;

void dfs(int n, int s, int now)
{
    if(now > 9)
    {
        if(n == 0 && s == 0) cnt++;
        return;
    }
    
    dfs(n - 1, s - now, now +1);
    dfs(n, s, now + 1);
    
    return;
}

int main()
{
    while (true)
    {
        int n, s;
        cin >> n >> s;
        cnt = 0;
        if(n == 0 && s == 0) return 0;
        
        dfs(n, s, 0);
        
        cout << cnt << endl;
    }
}