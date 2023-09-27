#include <bits/stdc++.h>
#define rep(i,n) for(int i=0;i<(int)n;i++)
#define ll long long
#define MAX 100000
using namespace std;

int partition(int A[],int p,int r){
    int x=A[r];
    int i=p-1;
    for(int j=p;j<r;j++){
        if(A[j]<=x){
            i++;
            swap(A[i],A[j]);
        }
    }
    swap(A[i+1],A[r]);
    return i+1;
}

int main(){
    int n;
    cin>>n;
    int A[n];
    rep(i,n) cin>>A[i];

    int res=partition(A,0,n-1);

    rep(i,n){
        if(i) cout<<" ";
        if (i==res) cout<<"[";
        cout<<A[i];
        if (i==res) cout<<"]";
    }
    cout<<endl;
    return 0;
}
