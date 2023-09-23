#include<iostream>
using namespace std;
int main(){
  int n,solve = 100000;
  cin >>n;
  while(n--){
    solve = solve*1.05;
    if(solve%1000 > 0) solve = solve/1000*1000+1000;
  }
  cout <<solve<<endl;
  return 0;
}