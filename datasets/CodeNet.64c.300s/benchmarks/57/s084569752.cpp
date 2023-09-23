#include<stdio.h>
#include<algorithm>
using namespace std;
int sen[10010][20];
int tate,yoko;
int cou(int sum[10010][2],int row)
{
    if(row == tate)
    {
        int ans = 0;
        for(int i = 0; i < yoko; i++)ans = ans + max(sum[i][0],sum[i][1]);
        return ans;
    }
    int sum0[10010][2] ={0},sum1[10010][2] = {0},ans0,ans1;
    for(int i = 0; i < yoko; i++)
    {
        sum0[i][0] = sum[i][0];
        sum0[i][1] = sum[i][1];
        sum1[i][0] = sum[i][0];
        sum1[i][1] = sum[i][1];
        if(sen[i][row] == 0)
        {
            sum0[i][0]++;
            sum1[i][1]++;
        }
        else
        {
            sum0[i][1]++;
            sum1[i][0]++;
        }
    }
    ans0 = cou(sum0,row + 1);
    ans1 = cou(sum1,row + 1);
    return max(ans0,ans1);
}
int main()
{
    while(scanf("%d%d",&tate,&yoko),tate + yoko)
    {
        int sam[10010][2] = {0};
        for(int i = 0; i < tate; i++)
        for(int j = 0; j < yoko; j++)
        scanf("%d",&sen[j][i]);
        printf("%d\n",cou(sam,0));
    }
    return 0;
}