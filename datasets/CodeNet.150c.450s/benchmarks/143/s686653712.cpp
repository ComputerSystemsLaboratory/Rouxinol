#include<bits/stdc++.h>
using namespace std;
long long n,q,a[100010],b,c,d[100010],x;
int main(){
    cin>>n;
    for (int i=0;i<n;i++) cin>>a[i];
    for (int i=0;i<n;i++) d[a[i]]++,x+=a[i];
    cin>>q;
    for (int i=0;i<q;i++){
        cin>>b>>c;
        x+=(d[b]*(c-b));
        d[c]+=d[b];d[b]=0;
        cout<<x<<endl;
    }
    return 0;
}