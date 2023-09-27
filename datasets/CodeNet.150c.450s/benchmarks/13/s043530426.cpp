#include <iostream>
#include <string.h>
using namespace std;

int main(){
  string s, p, ss;

  cin>>s>>p;
  ss=s+s;
  if(ss.find(p)!=-1){
    cout<<"Yes"<<endl;
  }else{
    cout<<"No"<<endl;
  }
  return 0;
}