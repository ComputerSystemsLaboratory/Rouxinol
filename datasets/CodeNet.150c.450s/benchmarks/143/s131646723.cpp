#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int a[100001];
int main(){
    int n;cin>>n;
    long int sum=0;
    for(int i=0;i<n;i++){
        int t;cin>>t;
        a[t]++;
        sum+=t;
    }
    int q;cin>>q;
    for(int i=0;i<q;i++){
        int b,c;cin>>b>>c;
        sum=sum+a[b]*(c-b);
        a[c]+=a[b];
        a[b]=0;
        cout<<sum<<endl;
    }
    
}
