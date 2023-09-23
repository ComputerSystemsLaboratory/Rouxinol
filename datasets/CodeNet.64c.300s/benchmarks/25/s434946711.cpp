#include <stdio.h>
#include <string.h>

int a[4], b[4];
bool visa[4], visb[4];

int main()
{
    //freopen("data.in", "r", stdin);
    int i, j, cnt1, cnt2;
    while(scanf("%d%d%d%d", &a[0], &a[1], &a[2], &a[3]) != EOF)
    {
        cnt1 = cnt2 = 0;
        memset(visa, false, sizeof visa);
        memset(visb, false, sizeof visb);
        for(i = 0; i < 4; i ++) 
            scanf("%d", &b[i]);
        for(i = 0; i < 4; i ++)
            if(!visa[i] && !visb[i] && a[i] == b[i])
                visa[i] = visb[i] = true, cnt1 ++;
        for(i = 0; i < 4; i ++)
        {
            if(!visa[i])
            {
                for(j = 0; j < 4; j ++)
                {
                    if(!visb[j] && a[i] == b[j])
                    {
                        cnt2 ++;
                        visa[i] = true;
                        visb[j] = true;
                        break;
                    }
                }
            }
        }
        printf("%d %d\n", cnt1, cnt2);
    }
    return 0;
}