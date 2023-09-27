#include<cstdio>
#include<algorithm>
using namespace std;
int main(){
    int n,a[50000],ans;
    scanf("%d",&n);
    while(n){
        ans=1000000000;
        for(int i=0;i<n;i++){
            scanf("%d",&a[i]);
        }
        sort(a,a+n);
        for(int i=1;i<n;i++){
            ans=min(ans,a[i]-a[i-1]);
        }
        printf("%d\n",ans);
        scanf("%d",&n);
    }
}
