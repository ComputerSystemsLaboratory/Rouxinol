#include<iostream>
#include<bits/stdc++.h>
#include<math.h>
using namespace std;
int main(){
vector <long long>a(1000007);
long long n,k,q,i,j,sum=0;
cin>>n;
for(i=0;i<n;i++){
        cin>>j;
    a[j]++;
    sum=sum+j;
}
cin>>q;
for(i=0;i<q;i++){
        cin>>j>>k;
        sum-=(a[j]*j);
        sum+=(a[j]*k);
        a[k]+=a[j];
        a[j]=0;
        cout<<sum<<"\n";

}


}