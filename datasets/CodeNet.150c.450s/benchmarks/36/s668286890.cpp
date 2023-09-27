#include<iostream>
using namespace std;
int main(){
  int d;
  while(cin >>d){
    int ans = 0;
    for(int k = d; k<600; k+=d) ans+=d*k*k;
    cout <<ans<<endl;
  }
  return 0;
}