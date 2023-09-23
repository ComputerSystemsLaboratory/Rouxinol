#include <algorithm>
#include <iostream>
#include <cstring>
#include <complex>
#include <cstdio>
#include <string>
#include <cmath>
using namespace std;
typedef long long LL;
const int MOD = int(1e9)+7;
const int INF = 0x3f3f3f3f;
const double EPS = 1e-9;
const double PI = acos(-1.0); //M_PI;

int n;
const int maxn = 10000000;
bool is[maxn];
int sum;
void f()
{
    memset(is , true , sizeof(is));
    is[0] = is[1] = false;
    int m = sqrt(maxn);
    for(int i = 2 ; i <= m ; i ++)
    {
        if(is[i])
        {
            for(int j = i * i ; j <= maxn ; j += i)
                is[j] = false;
        }
    }
}


int main()
{
    #ifdef DoubleQ
    freopen("in.txt","r",stdin);
    #endif
    std::ios::sync_with_stdio(false);
    std::cin.tie(0);
    f();
    while(cin >> n)
    {
        sum = 0;
        for(int i = 0 ; i <= n ; i ++)
        {
            if(is[i])
                sum ++;
        }
        cout << sum << endl;
    }
}