#include <iostream>
using namespace std;

int main(){
  int i,j,k,n,x,c=0;
  while (1){
    cin>>n>>x;
    if (n==0&&x==0)break;
    for (i=1;i<n-1;i++){
      for (j=i+1;j<n;j++){
        if (i+2*j<x&&x<=i+j+n)c++;
      }
    }
    cout<<c<<endl;
    c=0;
  }
}

