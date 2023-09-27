#include <bits/stdc++.h>
using namespace std;

void CountingSort(vector<int> &A,vector<int> &B,int n,int k){
    vector<int> C(k+1);
    for(int i=0;i<k+1;i++){
        C[i]=0;        
    }
    for(int i=1;i<n+1;i++){
        C[A[i]]++;
    }
    for(int i=1;i<k+1;i++){
        C[i]=C[i-1]+C[i];
    }
    for(int i=n;i>0;i--){
        B[C[A[i]]]=A[i];
        C[A[i]]--;
    }
}

int main(){
    int n;
    cin>>n;
    vector<int> A(n+1),B(n+1);
    for(int i=0;i<n;i++){
        cin>>A[i+1];
    }

    CountingSort(A,B,n,10000);

    for(int i=1;i<n+1;i++){
        if(i-1) cout<<' ';
        cout<<B[i];
    }
    cout<<endl;
}
