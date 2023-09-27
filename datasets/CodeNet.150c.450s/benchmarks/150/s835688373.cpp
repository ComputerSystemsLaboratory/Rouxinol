#include<iostream>
using namespace std;

int n,A[2000100],B[2000100];

void CountingSort(int *A,int *B,int k){
    int* C=new int[k+1];
    for(int i=0;i<=k;++i){
        C[i]=0;
    }

    for(int i=1;i<=n;++i){
        ++C[A[i]];
    }

    for(int i=1;i<=k;++i){
        C[i]+=C[i-1];
    }

    for(int i=n;i>=1;--i){
        B[C[A[i]]]=A[i];
        --C[A[i]];
    }
    
    delete[] C;
}

int main(){
    cin>>n;

    int max=0;
    
    for(int i=1;i<=n;++i){
        cin>>A[i];
        max=(A[i]>max?A[i]:max);
    }

    CountingSort(A,B,max);
    
    for(int i=1;i<=n;++i){
        cout<<B[i];

        if(i!=n){
            cout<<" ";
        }
        else{
            cout<<"\n";
        }
    }
}
