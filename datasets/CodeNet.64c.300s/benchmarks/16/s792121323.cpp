#include<bits/stdc++.h>
using namespace std;
const int inf=2e9;
const int maxn=2e5+5;

int n;
int a[maxn],b[maxn];

int main(){
    scanf("%d",&n);
    for(int i=0;i<n;++i) scanf("%d",&a[i]);
    b[n-1]=a[n-1];
    for(int i=n-2;i>=0;--i) b[i]=max(b[i+1],a[i]);
    int ans=-inf;
    for(int i=0;i+1<n;++i){
        ans=max(ans,b[i+1]-a[i]);
    }
    printf("%d\n",ans);
    return 0;
}

