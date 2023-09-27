#include <bits/stdc++.h>
  
using namespace std;
  
int main()
{
    int d;
  
    while (~scanf("%d", &d)) {
        int ans = 0;
        for (int a = d; a <= 600 - d; a += d) ans += a * a * d;
        printf("%d\n", ans);
    }
}