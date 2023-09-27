#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
  map<string,int> U;
  int n,m=0;
  cin >>n;
  while(n--){
    string s;
    cin >>s;
    U[s] = 1;
  }
  cin >>n;
  while(n--){
    string s;
    cin >>s;
    if(U[s] == 1){
      if(m == 0) cout <<"Opened by "<<s<<endl;
      else cout <<"Closed by "<<s<<endl;
      m = 1-m;
    }
    else cout <<"Unknown "<<s<<endl;
  }
  return 0;
}