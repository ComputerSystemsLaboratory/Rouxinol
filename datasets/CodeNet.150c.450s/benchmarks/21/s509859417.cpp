#include<iostream>
using namespace std;
int main(){
  int a,s=1;
  cin>>a;
  for(int i=0;i<3;i++){
   s*=a;
  }
  cout<<s<<endl;
}