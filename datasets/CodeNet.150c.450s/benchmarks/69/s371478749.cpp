#include<iostream>
#include<algorithm>
#include<iomanip>
#include<string>
#include<cmath>
#include<stack>
#include<cstring>
#include<cstdio>
using namespace std;
const int maxn =  10 + 8;

int n;
int g[maxn];

int main()
{
    scanf("%d", &n);
    while(n--)
    {
        memset(g, 0, sizeof g);
        stack<int> p,q;
        p.push(0); q.push(0);
        for(int i = 0; i < 10; ++i) cin >> g[i];
        int i = 0;
        while(true)
        {
            if(i == 10) break;
            if(g[i] > p.top()) {p.push(g[i]);}
            else {
                if(g[i] > q.top())
                {
                    q.push(g[i]);
                }
            }
            i++;
        }
        if(p.size() + q.size() == 12) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}