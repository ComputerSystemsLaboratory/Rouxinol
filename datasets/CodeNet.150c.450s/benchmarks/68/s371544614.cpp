#include<stdio.h>
#include<string.h>
#include<math.h>
#include<algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)

int main(){
    while(1){
        int N;
        scanf("%d",&N);
        if(N==0)break;
        int a[1145];
        rep(i,N){
            scanf("%d",&a[i]);
        }
        sort(a,a+N);
        int ans=1145141919;
        rep(i,N-1){
            ans=min(ans,a[i+1]-a[i]);
        }
        printf("%d\n",ans);
    }
    return 0;
}

