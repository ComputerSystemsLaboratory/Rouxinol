#include<iostream>
using namespace std;
long long int kaizyo(int x){
  if(x<2)return 1;
  return x*kaizyo(x-1);
}
int main(){
  int n;
  long long int a;
  cin>>n;
  a=kaizyo(n);
  cout<<a<<endl;
}