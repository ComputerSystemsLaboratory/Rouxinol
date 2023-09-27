#include <iostream>
#include <algorithm>
#include <cmath>
#include <cstdio>
#include <string>
#include <map>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int sum, cnt;

void dfs(int c, int s, int n)
{
    if (s == sum && n == 0)
        cnt++;
    if (c == 10 || n == 0)
        return;
    dfs(c+1, s+c, n-1);
    dfs(c+1,s,n);
}

int main(void)
{
    int n;
    while (cin >> n >> sum) {
        if (n == 0 && sum == 0) break;
        cnt = 0;
        dfs(0, 0, n);
        
        cout << cnt << endl;
    }
    

    return 0;
}