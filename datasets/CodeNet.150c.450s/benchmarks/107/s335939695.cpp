#include <bits/stdc++.h>
using namespace std;
#define rep(i,j,k) for(int i = (int)j;i <= (int)k;i ++)
#define debug(x) cerr<<#x<<":"<<x<<endl
const int maxn=(int)1e6+5;
int dp[1005][1005];     /*dp[i][j]表示表示A串从第0个字符开始到第i个字符和B串从第0个
字符开始到第j个字符，这两个字串的编辑距离。字符串的下标从1开始。*/
char a[1005],b[1005];   //a,b字符串从下标1开始
const int INF=1005;
int EditDis()
{
    int len1 = strlen(a+1);
    int len2 = strlen(b+1);
    //初始化
    for(int i=1;i<=len1;i++)
        for(int j=1;j<=len2;j++)
            dp[i][j] = INF;
    for(int i=1;i<=len1;i++)
        dp[i][0] = i;
    for(int j=1;j<=len2;j++)
        dp[0][j] = j;
    for(int i=1;i<=len1;i++)
    {
        for(int j=1;j<=len2;j++)
        {
            int flag;
            if(a[i]==b[j])
                flag=0;
            else
                flag=1;
            dp[i][j]=min(dp[i-1][j]+1,min(dp[i][j-1]+1,dp[i-1][j-1]+flag));
            //dp[i-1][j]+1表示删掉字符串a最后一个字符a[i]
            //dp[i][j-1]+1表示给字符串添加b最后一个字符
            //dp[i-1][j-1]+flag表示改变,相同则不需操作次数,不同则需要,用flag记录
        }
    }
    return dp[len1][len2];
}
int main(){
    ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin>>a+1>>b+1;
    cout<<EditDis()<<endl;
}
/* 
acac
acm

1 ≤ length of s1 ≤ 1000
1 ≤ length of s2 ≤ 1000
 */
