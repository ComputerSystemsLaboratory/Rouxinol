#include<cstdio>
using namespace std;
int main(){
    int n,m,p;
    while(scanf("%d%d%d",&n,&m,&p),n||m||p){
        int sum=0,c;
        for(int i=1;i<=n;i++){
            int val;
            scanf("%d",&val);
            sum+=val;
            if(i==m)c=val;
        }
        if(c==0){
            puts("0");
            continue;
        }
        double ans=100.0*sum/c*(100-p)/100;
        printf("%d\n",(int)ans);
    }
    return 0;
}