#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4],b[4],d,k;
    for(int i=0;i<4;i++){
        cin>>a[i];
    }
    for(int i=0;i<4;i++){
        cin>>b[i];
    }
    d=a[0]+a[1]+a[2]+a[3];
    k=b[0]+b[1]+b[2]+b[3];
    if(d>k){cout<<d<<endl;}
    if(d<k){cout<<k<<endl;}
    if(d==k){cout<<d<<endl;}

}