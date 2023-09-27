#include <iostream>

using namespace std;
int n,q;
int a[20];
int m[200];

int solve(int k,int m){
    if(k>n){
        return 0;
    }
    if(m==0){
        return 1;
    }
    return solve(k+1,m)||solve(k+1,m-a[k]);
}

int main()
{
    int i,j;
    cin>>n;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>q;
    for(i=0;i<q;i++){
        cin>>m[i];
        if(solve(0,m[i])==1)cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }
    return 0;
}