#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
void func (int cnt,int nowN,int nowS);
int n,s,ans=0;
int main()
{
    while(1){
        scanf("%d%d",&n,&s);
        if(n==0&&s==0)break;
        func (0,0,0);
        printf("%d\n",ans);
        ans=0;
    }
    return 0;
}
void func (int cnt,int nowN,int nowS)
{
    if(cnt==10){
        if(nowN==n&&nowS==s)ans++;
        return;
    }
    /*
    if(cnt==10)return;
    if(cnt==9&&nowN==n&&nowS==s)ans++;
    */

    func(cnt+1,nowN+1,nowS+cnt);//?????¶
    func(cnt+1,nowN,nowS);//?????°??????
}