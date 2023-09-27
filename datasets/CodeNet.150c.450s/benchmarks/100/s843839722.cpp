#include<iostream>

using namespace std;

int main(void){
  unsigned long long int n;
  unsigned long long int fact=1;
  cin>>n;
  while(n) fact*=n--;
  cout<<fact<<endl;
  return 0;
}