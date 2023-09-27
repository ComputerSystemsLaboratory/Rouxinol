#include<iostream>
using namespace std;
long long a[200001],in[200001];
bool f[200001];
int main(){
  int n,k;
  cin>>n>>k;
  for(int i=0;i<n;i++){
    cin>>in[i];
  }

  for(int i=k;i<n;i++){
    if(in[i]>in[i-k]){
      cout<<"Yes"<<endl;
    }else{
      cout<<"No"<<endl;
    }

  }

  return 0;
}