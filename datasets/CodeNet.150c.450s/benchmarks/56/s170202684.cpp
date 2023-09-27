#include<iostream>

using namespace std;

int main(){

  int n;
  long long in,max=-100000000,min=100000000,sum=0;

  cin>>n;

  for(int i=0;i<n;i++){
    cin>>in;
    if(in>max) max=in;
    if(in<min) min=in;
    sum+=in;
  }

  cout<<min<<" "<<max<<" "<<sum<<endl;
}