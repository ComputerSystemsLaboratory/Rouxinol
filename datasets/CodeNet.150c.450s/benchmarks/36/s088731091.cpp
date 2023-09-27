#include<iostream>
using namespace std;

int main(void){
  int n;
  while(cin>>n){
    long long res = 0;
    for(int i = 0 ; i < 600 ; i += n){
      res += n * i * i;
    }
    cout<<res<<endl;
  }
  return 0;
}