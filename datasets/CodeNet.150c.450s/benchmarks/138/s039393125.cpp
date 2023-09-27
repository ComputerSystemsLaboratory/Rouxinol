#include <iostream>
using namespace std;

int main(){
  int n1,n2;
  cin>>n1>>n2;
  while(n1!=0){
  if(n1<n2){
    int temp=n2;
    n2=n1;
    n1=temp;
  }
    n1=n1%n2;
  }
  cout<<n2<<endl;
  
  return 0;
}