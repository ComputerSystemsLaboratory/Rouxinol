#include <cstdio>
#include <cmath>

#define reep(i,n,m) for(int i=(n);i<(m);i++)
#define rep(i,n) reep(i,0,n)

using namespace std;

#define MAX 1000000

bool flg[MAX]={0};

void init(){
    flg[1] = true;
    reep(i,2,MAX){
        bool f=true;
        reep(k,2,sqrt(i)){
            if(i%k==0){
                f=false;
                break;
            }
        }
        if(f){
            for(int k=i+i;k<MAX;k+=i){
                flg[k]=true;
            }
        }
    }
}

int main(){
    init();
    int n;
    while(scanf("%d",&n)!=EOF){
        int ans=0;
        reep(i,1,n+1){
            if(!flg[i]){
                ans++;
            }
        }
        printf("%d\n",ans);
    }
}