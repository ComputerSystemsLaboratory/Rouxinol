#include<iostream>
using namespace std;
int A[2000001],B[2000001]={},n;
void CountingSort(int A[],int B[],int k){
    int C[10001];
    for(int i=0;i<=k;i++) C[i]=0;
    for(int i=0;i<n;i++) C[A[i]]++; 
    for(int i=1;i<=k;i++) C[i]+=C[i-1];
    for(int j=n-1;j>=0;j--){
        B[C[A[j]]] =A[j];
        C[A[j]]--;
    }
}
int main(){
 cin>>n;
 for(int i=0;i<n;i++) cin>>A[i];
CountingSort(A,B,10000);
for(int i=1;i<n+1;i++){
    if(i!=1) cout<<" "<<B[i];
    else cout<<B[i];
}
cout<<endl;
return 0;
}
