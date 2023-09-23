#include <iostream>
#include <algorithm>

using namespace std;

const int INF = 1e+9;

int cnt, n, s;

void dfs(int i, int sum, int num)
{
    if(sum == s && num == n)
    {
        cnt++;
        return;
    }
    
    if(i == 10 || num == n)
        return;

    dfs(i + 1, sum + i, num + 1);
    dfs(i + 1, sum, num);
}


int main()
{
    
    while(cin >> n >> s, n || s)
    {
        cnt = 0;
        dfs(0, 0, 0);
        cout << cnt << endl;
    }

    return 0;
}
