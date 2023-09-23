#include <iostream>
#include <queue>
#include <vector>
#include <set>
#include <algorithm>
#include <stdio.h>
//#define int long long
inline int in() { int32_t x; scanf("%d", &x); return x ;}
using namespace std;
//const int INF = 1e18;
const int MAX_N = 1e5 + 5;
struct top3
{
    int a[4] = {0 , 0 , 0 , 0};
    void add(int x)
    {
        a[3] = x;
        sort(a , a + 4 , greater<int>());
    }
}tp;
int32_t main()
{
    int x;
    
    while (scanf("%d",&x) != EOF)
    {
        tp.add(x);
    }
    
    cout << tp.a[0] << endl << tp.a[1] << endl << tp.a[2] << endl;
}