#include<iostream>
#include<algorithm>
using namespace std;

int main(){
  int debt=100000, n;
  cin >> n;
  for(int i=0;i<n;i++){
    debt += debt*(5.0/100.0);
    if(debt%1000!=0){
      debt=(debt/1000)*1000+1000;
    }
  }
  if(debt%1000!=0){
      debt=(debt/1000)*1000+1000;
  }
  cout << debt << endl;
  return 0;}