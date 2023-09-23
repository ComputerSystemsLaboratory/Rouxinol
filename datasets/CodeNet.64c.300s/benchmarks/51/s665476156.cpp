#include<iostream>
using namespace std;

long long functorial(long long ll){
  if(ll<=1) return 1;
  else return functorial(ll-1)*ll;
}

int main(){
  int n;
  cin>>n;
  cout<<functorial(n)<<endl;
  return 0;
}