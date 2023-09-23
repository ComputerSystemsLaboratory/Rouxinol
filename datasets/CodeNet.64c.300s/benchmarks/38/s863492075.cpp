#include <iostream>
int a[20];
using namespace std;
bool dfs(int i,int b,int c)
{
    if (i == 11) return true;
    if (a[i] > b) if(dfs(i + 1,a[i],c)) return true;
    if (a[i] > c) if(dfs(i + 1,b,a[i])) return true;
    return false;
}
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        for (int i = 1; i <= 10; ++i)
            cin >> a[i];
        if (dfs(1, 0, 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}