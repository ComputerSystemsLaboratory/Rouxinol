#include <iostream>
#include <bitset>
#include <algorithm>
#include <cstdio>
using namespace std;
bitset<10000> cookie[10];
int main()
{
    int R, C;
    while(scanf("%d%d",&R,&C)&&R>0)
    {
        int i, j;
        for (i = 0; i < R; ++i)
            for (j = 0; j < C; ++j)
            {
                bool upwards;
                cin >> upwards;
                cookie[i][j] = upwards;
            }

        // 在横向一共有2^R???
        int permute_r = 1 << R;
        int result = 0;
        for (i = 0; i < permute_r ; ++i)
        {
            // 完成当前的??
            for (j = 0; j < R; ++j)
            {
                // ?一行是否?当翻个面
                if (i & (1 << j))
                {
                    cookie[j].flip();
                }
            }


            // ??一列分?算出朝上和朝下的煎?个数，取其最大?
            int possible_answer = 0;
            for (j = 0; j < C; ++j)
            {
                int up_cookie_count = 0;
                for (int k = 0; k < R; ++k)
                {
                    if (cookie[k][j])
                    {
                        ++up_cookie_count;
                    }
                }
                possible_answer += max(up_cookie_count, R - up_cookie_count);
            }
            // ?果取最大?
            result = max(result, possible_answer);

            // ?原
            for (j = 0; j < R; ++j)
            {
                if (i & (1 << j))
                {
                    cookie[j].flip();
                }
            }
        }
        printf("%d\n",result);
    }

    return 0;
}