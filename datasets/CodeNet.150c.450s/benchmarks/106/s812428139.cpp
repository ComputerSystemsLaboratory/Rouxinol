#include<iostream>
using namespace std;
int main(){
  int a;
  int b;
  int c;
  cin >> a >> b >> c;
  int n=0;
  if(a<b){
    for(int i=a;i<=b;i++){
      if(c%i==0){
        n=n+1;
      }
    }
  }
  if(a==b){
    if(c%a==0){
      n=1;
    }
  }
  cout << n << endl;
}