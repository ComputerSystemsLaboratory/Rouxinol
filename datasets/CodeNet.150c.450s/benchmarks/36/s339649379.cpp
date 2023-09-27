#include<iostream>
using namespace std;
int main(){
  int n;
  while(cin >>n){
    int s=0;
    for(int i=n; i<600; i+=n) s+=i*i*n;
    cout <<s<<endl;
  }
  return 0;
}