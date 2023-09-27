#include <iostream>
#include <cstdio>
#include <cmath>
#include <climits>
using namespace std;

int main(){
  int n,tmp;
  cin>>n;
  bool flag;
  for(int i = 1; i <= n; i++){
    flag = false;
    if(i % 3 == 0) flag = true;
    tmp = i;
    while(tmp){
      if(tmp % 10 == 3) flag = true;
      tmp /= 10;
    }
    if(flag){
      cout<<' '<<i;
    }
  }
  cout<<endl;

  return 0;
}