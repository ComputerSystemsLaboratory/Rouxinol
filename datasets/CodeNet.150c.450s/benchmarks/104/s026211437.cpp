#include <iostream>
#include <cstdio>
using namespace std;
int main(void)
{
    int w, n;
    cin >> w >> n;
    int m[w];
    for (int i = 0; i < w; i++)
    {
        m[i] = i;
    }
    for (int i = 0; i < n; i++)
    {
        int a, b;
        scanf("%d,%d", &a, &b);
        int t = m[a - 1];
        m[a - 1] = m[b - 1];
        m[b - 1] = t;
    }
    for (int i = 0; i < w; i++)
    {
        cout << m[i] + 1 << endl;
    }
    return 0;
}

