#include <iostream>
using namespace std;
int main() {
  int a,n,sum,min,max,i;
  while(1){
  cin >>n;
  if (n==0){
    break;
  }
  cin >>min;
  sum=min;
  max=min;
  for (i=0;i<n-1;i++){
    cin>>a;
    sum=sum+a;
    if(min>a){
      min=a;
    }
    if(max<a){
      max=a;
    }
  }
  cout <<(sum-max-min)/(n-2)<<endl;
  }
  return 0;
}