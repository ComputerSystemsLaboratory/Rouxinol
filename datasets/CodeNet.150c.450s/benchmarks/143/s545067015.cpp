#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long int a[n];
    long long int r[100001]={0};
    long long int sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        r[a[i]]++;
        sum+=a[i];
       }
    int q;
    cin>>q;
    for(int i=0;i<q;i++){
            int b,c;
            cin>>b>>c;
            sum-=(long long int)(b*r[b]);
            sum+=(long long int)(r[b]*c);
            r[c]+=r[b];
            r[b]=0;
            cout<<sum<<"\n";
    }
}