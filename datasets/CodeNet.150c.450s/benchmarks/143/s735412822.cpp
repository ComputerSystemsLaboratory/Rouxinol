#include<iostream>
using namespace std;
int main(){

  long long N;
  cin>>N;
  long long i;
  long long A[N];
  long long Anum[100001]={};
  long long sum=0;
  for(i=0;i<=N-1;i++){
  
    cin>>A[i];
    Anum[A[i]]++;
  }
  long long Q;
  cin>>Q;
  long long B[Q];
  long long C[Q];
  for(i=0;i<=Q-1;i++){
  
    cin>>B[i]>>C[i];
  }
  for(i=0;i<=100000;i++){
  
    sum+=Anum[i]*i;
  }
  for(i=0;i<=Q-1;i++){
        
    sum+=C[i]*Anum[B[i]];
    sum-=B[i]*Anum[B[i]];
    Anum[C[i]]+=Anum[B[i]];
    Anum[B[i]]-=Anum[B[i]];
    cout<<sum<<endl;
  }

}