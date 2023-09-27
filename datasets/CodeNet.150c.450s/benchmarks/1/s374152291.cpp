#include <bits/stdc++.h>
static const int MAX=100000;

using namespace std;

int lis(int n,const int A[],int L[]){
    L[0]=A[0];
    int length=1;

    for(int i=1;i<n;i++){
        if(L[length-1]<A[i])
            L[length++]=A[i];
        else
            *lower_bound(L,L+length,A[i])=A[i];
    }
    return length;
    
}
int main(){
    int n,A[MAX+1],L[MAX+1];
    cin>>n;
    for(int i=0;i<n;i++)cin>>A[i];
    cout<<lis(n,A,L)<<"\n";
    return 0;
}
