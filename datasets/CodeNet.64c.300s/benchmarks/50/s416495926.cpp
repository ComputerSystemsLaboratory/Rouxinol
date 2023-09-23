#include<bits/stdc++.h>
using namespace std;

void BubbleSort(int A[],int N){
int i,j,tmp,cnt=0;
for(i=0;i<N;i++){
for(j=N-1;j>0;j--){

if(A[j]<A[j-1]){
tmp=A[j];
A[j]=A[j-1];
A[j-1]=tmp;
cnt++;
}
}
}
for(i=0;i<N;i++){
if(i>0)cout<<" ";
cout<<A[i];
}
cout<<endl;
cout<<cnt<<endl;
}

int main(){
int N;
cin>>N;
int A[N];
for(int i=0;i<N;i++)cin>>A[i];
BubbleSort(A,N);
return 0;
}