#include<iostream>
using namespace std;
int main(){
  int n;
  while(cin>>n,n){
    int min=1000000;
    for(int i=0;i*i<=n;i++)for(int j=0;j*j*j<=n;j++)if(j*j*j+i*i<=n&&min>i+j+n-j*j*j-i*i)min=i+j+n-j*j*j-i*i;
    cout<<min<<endl;
  }
  return 0;
}