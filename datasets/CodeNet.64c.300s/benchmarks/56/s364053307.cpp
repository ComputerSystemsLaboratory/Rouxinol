#include<iostream>
#include<cstdio> 
using namespace std;

int main()
{
    int n; 
    while(scanf("%d", &n) != EOF) 
    {
                      int m, y, d, cnt; 
                      while(n --) 
                      {
                              scanf("%d%d%d", &y, &m, &d) ;
                              int i, j;
                              cnt = 0;
                              cnt += (y - 1) / 3  * 5 + 195 * (y - 1);
                              if(y % 3 == 0) 
                                   cnt += (m - 1) * 20;
                              else 
                                   cnt += (m - 1) * 19 + m / 2;
                              cnt += d - 1; 
                              int ans = 196470 - cnt;
                              printf("%d\n", ans);
                      }
    } 
} 