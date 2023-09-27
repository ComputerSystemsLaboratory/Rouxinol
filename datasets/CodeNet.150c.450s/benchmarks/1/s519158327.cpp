#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> A(100000),L(100000);

int lis(){
    L[0]=A[0];
    int length=1;
    for(int i=0;i<n;i++){
        if(L[length-1]<A[i]){
            L[length++]=A[i];
        }
        else{
            *lower_bound(L.begin(),L.begin()+length,A[i])=A[i];
        }
    }
    return length;
}

int main(){
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>A[i];
    }

    cout<<lis()<<endl;
}
