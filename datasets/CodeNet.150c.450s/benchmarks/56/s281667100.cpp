#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long sum=0;
    scanf("%d",&n);
    vector<int> a(n);
    for (int i=0;i<n;i++) scanf("%d", &a[i]);
    sort(a.begin(),a.end());
    for (int i=0;i<n;i++) sum+=a[i];
    printf("%d %d %lld\n",a[0],a[n-1],sum);
    return 0;
}

