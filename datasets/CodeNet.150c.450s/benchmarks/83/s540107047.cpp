#include<iostream>
using namespace std;
int main(){
  int N,W;
  cin>>N>>W;
  W+=1;
  int value[N];
  int weight[N];
  int data[W];
  for(int i=0;i<N;i++){
    cin>>value[i]>>weight[i];
  }
  for(int i=0;i<W;i++){
    data[i]=0;
  }
  for(int i=0;i<N;i++){
    for(int j=W-1;j>=0;j--){
      if(j-weight[i]>=0){
        if(data[j]<=data[j-weight[i]]+value[i])
          data[j]=data[j-weight[i]]+value[i];
      }
    }
  }
  int max=0;
  for(int i=0;i<W;i++){
    if(max<data[i])
      max=data[i];
  }
  cout<<max<<endl;
  return 0;
}

