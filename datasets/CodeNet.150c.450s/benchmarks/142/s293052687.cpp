#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int MAXN = 2e5 + 4;
int n,k;
ll a[MAXN];
int main(){
    scanf("%d%d",&n,&k);
    for(int i=1;i<=n;i++)scanf("%lld",&a[i]);
    for(int i=k+1,p=1;i<=n;i++,p++) {
        if(a[i] > a[p]) {
            puts("Yes");
        } else {
            puts("No");
        }
    }
    return 0;
}
