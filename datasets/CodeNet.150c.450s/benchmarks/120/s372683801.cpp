#include <stdio.h>
#include <bitset>
using namespace std;
bitset <10000> bit[10];
int main()
{
    int r, c;
    while(scanf("%d%d", &r, &c), r || c)
    {
        int i, j, k;
        for(i = 0; i < r; i++)
            for(j = 0; j < c; j++)
            {
                int x;
                scanf("%d", &x);
                bit[i][j] = x;
            }
        // 用二?制枚?行数是否翻?
        int ans = 0;
        for(i = 0;i < (1 << r);i++)
        {
            //枚??一行是否翻?
            for(j = 0;j < r;j++)
            {
                if(i & (1 << j))
                    bit[j].flip();
            }

            int t = 0;
            for(j = 0;j < c;j++)
            {
                int tt = 0;
                for(k = 0;k < r;k++)
                    if(bit[k].test(j))
                        tt++;
                t += max(tt, r - tt);
            }
            ans = max(ans, t);

            //回溯
            for(j = 0;j < r;j++)
            {
                if(i & (1 << j))
                    bit[j].flip();
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}