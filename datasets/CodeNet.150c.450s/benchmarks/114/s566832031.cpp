#include <stdio.h>
#define MAX 1 << 22
int map[1000][1000];
int n, minval = 999999;

int prim()
{
    int sum = 0;
    int d[1000], fathernode[1000], color[1000];;
    for(int i = 0; i < n; i ++)
        d[i] = fathernode[i] = MAX;
    d[0] = 0;
    while(true)
    {
        int ch = -1, min = MAX;
        for(int i = 0; i < n; i ++)
        {
            if(min > d[i] && color[i] == 0) //选取未被染色的点
            {
                ch = i;
                min = d[i];
            }
        }
        if(ch == -1) //选完了，跳出
            break;
        color[ch] = 1;//选取这个点后染色
        for(int j = 0; j < n; j ++)//选取V-T中与T距离最近的节点
        {
            if(d[j] > map[ch][j] && color[j] == 0)
            {
                d[j] = map[ch][j];
                fathernode[j] = ch;//j节点的父节点是ch
            }
        }
    }
    //选取完毕，开始加起来
    for(int k = 0; k < n; k ++)//只加被染色（即被选中的）节点
    {
        if(fathernode[k] != MAX)//只加上有父节点的点
            sum += map[k][fathernode[k]];
    }
    return sum;
}

int main(void)
{
    scanf("%d", &n);
    for(int i = 0; i < n; i ++)
        for(int j = 0; j < n; j ++)
        {
            int t;
            scanf("%d", &t);
            map[i][j] = (t == -1 ? MAX : t);
        }
    printf("%d\n", prim() );
    return 0;
}
