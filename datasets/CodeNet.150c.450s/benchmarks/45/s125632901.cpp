#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef long long int lli;
using namespace std;

int modPow(lli m,lli n,lli p){
    if(n==1)return m%p;
    if(n%2==1)return (m*modPow(m,n-1,p))%p;
    lli t=modPow(m,n/2,p);
    return (t*t)%p;
}

int main(int argc,char *argv[]){
    lli m,n,p=1e9+7;

    cin>>m>>n;
    cout<<modPow(m,n,p)<<endl;
    return 0;
}
