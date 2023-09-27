#include <iostream>
using namespace std;
 
int main() {
  int n,i,j,k,max,sum;
  while(1){
    int max=-100000;
    cin>>n;
    int a[n];
    if (n==0) break;
    for (i=0;i<n;i++){
      cin>>a[i];
    }
    for (i=0;i<n;i++){
      sum=0;
      for (j=0;j<n-i;j++){
        sum=sum+a[i+j];
        if (max<sum) max=sum;
      }
    }
    cout<<max<<endl;
  }
}