#include<iostream>
using namespace std;
int main(){
  int a;
  for(int i=1;i<10001;i++){
    cin >> a;
    if(a==0)break;
    cout <<"Case "<<i<<": "<<a<<endl;
  }
  return 0;
}