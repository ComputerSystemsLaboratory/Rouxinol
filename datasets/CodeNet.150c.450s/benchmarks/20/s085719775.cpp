#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int t=n/3600;
  cout<<t<<":";
  t=n%3600;
  cout<<t/60<<":"<<t%60<<endl;
  return 0;
}