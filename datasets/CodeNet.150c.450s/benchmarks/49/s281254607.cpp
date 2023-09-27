#include<iostream>
#include<cstdio>
using namespace std;
int main( ){
  while(1){
    int n,a,sum=0,max=0,min=1001;
    cin>>n;
    if(n==0)break;
    for(int i=0;i<n;i++){
      cin>>a;
      sum+=a;
      if(a>max)max=a;
      if(a<min)min=a;
    }
    cout<<(sum-max-min)/(n-2)<<endl;
  }
  return 0;
}