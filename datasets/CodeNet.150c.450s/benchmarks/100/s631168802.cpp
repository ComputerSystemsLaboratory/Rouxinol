#include<iostream>
using namespace std;
int main(){
  int n;
  long a=1;
  cin>>n;
  for(;n!=0;n--){
    a*=n;
  }
  cout<<a<<endl;
}