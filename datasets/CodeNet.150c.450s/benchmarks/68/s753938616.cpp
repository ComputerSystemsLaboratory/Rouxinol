#include <bits/stdc++.h>
using namespace std;
int a[1000];
int main() {
    int n;
    while(scanf("%d",&n),n) {
        for(int i=0;i<n;i++) scanf("%d",&a[i]);
        int ans=1<<30;
        for(int i=0;i<n;i++) for(int j=i+1;j<n;j++) {
            ans=min(ans,abs(a[i]-a[j]));
        }
        printf("%d\n",ans);
    }
}