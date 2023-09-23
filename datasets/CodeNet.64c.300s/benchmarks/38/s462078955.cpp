//aoj 0033 Ball
//10个球下落，分2个管道走，要求2个管道里面自底向上数字要??
#include<cstdio>
using namespace std;

int boll[15];
int dig[2];

//bool dfs(int d)//dfs的参数越少越好，不用考?管道分支
//{
//    if(d==10) return true;//放完了
//    int tmp;
//    for(int i=0; i<2; ++i)
//    {
//        if(boll[d]>dig[i])
//        {
//            tmp = dig[i];
//            dig[i] = boll[d];
//            if(dfs(d+1)) return true;
//            dig[i] = tmp;
//        }
//    }
//    return false;
//}

bool dfs(int bi, int di)//?里是考?了管道分支的
{
    if(bi==10) return true;//放完了
    int tmp = dig[di];
    if(boll[bi]>dig[di]) dig[di] = boll[bi];
    else return false;
    for(int i=0; i<2; ++i)
    {
        if(dfs(bi+1,i)) return true;
    }
    dig[di] = tmp;
    return false;
}

void solve()
{
    dig[0] = dig[1] = -1;
    //少参数版
    //bool ans = dfs(0);
    
    //多参数版
    bool ans = false;
    for(int i=0; i<2; ++i) ans |= dfs(0,i);
    
    printf("%s\n", ans?"YES":"NO");
}

int main()
{
    int n;
    scanf("%d\n", &n);
    while(n--)
    {
        for(int i=0; i<10; ++i) scanf("%d", &boll[i]);
        solve();
    }
    return 0;
}