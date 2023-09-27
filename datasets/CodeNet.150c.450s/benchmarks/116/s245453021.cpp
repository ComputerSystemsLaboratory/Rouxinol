#include<iostream>
using namespace std;

int main(){
  int n,k;
  while(cin>>n>>k,n+k!=0){
    long long htoohtoo[n];
    for(int i=0;i<n;i++)
      cin>>htoohtoo[i];
    long long htoo=0;
    long long max=0;
    for(int i=0;i<n-k+1;i++){
      htoo = 0;
      for(int j=0;j<k;j++){
	htoo+=htoohtoo[i+j];
      }
      if(max<htoo){
	max=htoo;
      }
    }
    cout<<max<<endl;
  }
  return 0;
}