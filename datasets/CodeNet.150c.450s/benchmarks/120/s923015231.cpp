#include <iostream>
#include <cstdio>
#include <bitset>
#include <algorithm>
using namespace std;
int R, C, t, ans;
bitset<10005>b[15];

/*首先，翻?行列的次序不影??果，因?行的范??小，可以枚?所有行状?，即把行先翻?完?，
?于??行状?，在?列中??最?解，?行列翻?，即判断0多?是1多,1多?相当于不翻??列，
0多相当于翻??列，因此用bitset容器方便?理。*/
void dfs(int k)
{
    if(k == R)
    {
        int tmp = 0;
        for(int i=0; i<C; i++)
        {
            int num = 0;
            for(int j=0; j<R; j++)
                if(b[j][i]) num++;
            tmp += max(num, R-num);
        }
        ans = max(ans, tmp);
        return;
    }
    dfs(k+1);
    b[k].flip();
    dfs(k+1);
    //b[k].flip();
}

int main()
{
    while(~scanf("%d%d",&R,&C),R+C)
    {
        ans = -1;
        for(int i=0; i<R; i++)
            for(int j=0; j<C; j++)
            {
                scanf("%d",&t);
                b[i][j] = t;
            }
        dfs(0);
        printf("%d\n",ans);
    }
    return 0;
}