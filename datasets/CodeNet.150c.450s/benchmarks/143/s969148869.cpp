#include<bits/stdc++.h>
using namespace std;

int main(){
  long N;cin>>N;
  vector<long> A(N);
  vector<long> R(100010,0);
  long count=0;
  for(int i=0;i<N;i++){
    cin>>A.at(i);
    count +=A.at(i);
    R.at(A.at(i))++;
  }
  long Q;cin>>Q;
  vector<long> B(Q),C(Q);
  for(int i=0;i<Q;i++) cin>>B.at(i)>>C.at(i);
  
  for(int i=0;i<Q;i++){
    if(R.at(B.at(i))>0){
      long Bi=R.at(B.at(i));
      R.at(B.at(i))=0;
      R.at(C.at(i))+=Bi;
      count += Bi*(C.at(i)-B.at(i));
    }
    cout<<count<<endl;
  }
}