#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int calc(int y,int m,int d){
    int cnt=0;
    for(int i=1;i<y;i++){
        cnt+=(i%3)?195:200;
    }
    for(int i=1;i<m;i++){
        if(y%3!=0&&i%2==0)cnt+=19;
        else cnt+=20;
    }
    cnt+=d;
    return cnt;
}
int main(){
    int n;
    scanf("%d",&n);
    while(n--){
        int y,m,d;
        scanf("%d%d%d",&y,&m,&d);
        printf("%d\n",calc(1000,1,1)-calc(y,m,d));
    }
    return 0;
}