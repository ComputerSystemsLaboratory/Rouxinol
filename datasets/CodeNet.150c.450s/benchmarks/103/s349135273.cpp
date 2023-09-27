#include<cstdio>
using namespace std;
int saiki(int n,int m,int cnt);
int main(){
    int n,m;
    while(1){
        scanf("%d%d",&n,&m);
        if(n == 0 && m == 0)break;
        int ans = 0;
        int cnt = 0;
        ans = saiki(n,m,cnt);
        printf("%d\n",ans);
    }
    return 0;
}
int saiki(int n,int m,int cnt){
    if(n == 0&&m == 0)return 1;
    if(cnt >= 10)return 0;
    return saiki(n-1,m-cnt,cnt+1)+saiki(n,m,cnt+1);
}