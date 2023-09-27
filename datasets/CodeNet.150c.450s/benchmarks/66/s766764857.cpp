#include <string>
#include <set>
#include <iostream>
using namespace std;

int main(){
  int a,now;
  set<string> agg;
  string s;
  cin>>a;
  for(int i=0;i<a;i++){
    cin>>s;
    agg.insert(s);
  }
  cin>>a;
  now=1;
  for(int i=0;i<a;i++){
    cin >>s;
    if(agg.count(s)==0)cout <<"Unknown "<<s<<endl;
    else if(now==1){
      cout <<"Opened by "<<s<<endl;
      now=0;
    }else if(now==0){
      cout <<"Closed by "<<s<<endl;
      now=1;
    }
  }
  return 0;
}