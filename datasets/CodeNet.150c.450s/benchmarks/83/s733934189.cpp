#include<iostream>
using namespace std;

int main(){
  int N,W;
  cin>>N>>W;
  int v[N];
  int w[N];
  for(int i=0;i<N;i++){
    cin>>v[i]>>w[i];
  }
  int data[W];
  for(int i=0;i<W+1;i++){
    data[i]=0;
  }
  for(int i=0;i<N;i++){
    for(int j=W;j>=0;j--){
      if(j>=w[i]){
        if(data[j]<=data[j-w[i]]+v[i]){
          data[j]=data[j-w[i]]+v[i];
        }
      }
    }
  }
  int max=0;
  for(int i=0;i<W+1;i++){
    if(max<data[i]){
      max=data[i];
    }
  }
  cout<<max<<endl;
  return 0;
}
