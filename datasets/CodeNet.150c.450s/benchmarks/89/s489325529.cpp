#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    bool f[1000001];fill(f,f+1000001,true);
    f[0]=f[1]=false;
    for(int i=0;i<1000001;i++){
        if(!f[i])continue;
        for(int j=i+i;j<1000001;j+=i){
            f[j]=false;
        }
    }
    int a,d,n;
    while(scanf("%d%d%d",&a,&d,&n),a||d||n){
        int cnt=0;
        for(int i=a;i<=1000000;i+=d){
            if(f[i]){
                cnt++;
                if(cnt==n){
                    printf("%d\n",i);
                    break;
                }
            }
        }

    }
    return 0;
}