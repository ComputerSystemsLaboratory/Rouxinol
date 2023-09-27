//Square Route
#include <bits/stdc++.h>
using namespace std;
int n,m,a[1505],b[1505];
int main(){
    while(1){
        scanf("%d%d",&n,&m);
        if(n+m==0) return 0;
        for(int i=1;i<=n;i++) scanf("%d",&a[i]);
        for(int i=1;i<=m;i++) scanf("%d",&b[i]);
        map<int,int>M;
        for(int i=1;i<=n;i++){
            int S = 0;
            for(int j=i;j<=n;j++){
                S += a[j];
                M[S]++;
            }
        }
        long long ans = 0;
        for(int i=1;i<=m;i++){
            int S = 0;
            for(int j=i;j<=m;j++){
                S += b[j];
                ans += M[S];
            }
        }
        printf("%lld\n",ans);
    }
}