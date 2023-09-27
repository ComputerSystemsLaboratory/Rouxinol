#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(){

  string tmp;
  map <string,bool> a;
  int n,i;

  cin>>n;
  for(i=0;i<n;i++){
    cin>>tmp;
    if(tmp=="insert"){
      cin>>tmp;
      a.insert(make_pair(tmp,true));
    } else {
      cin>>tmp;
      if(a.count(tmp)) cout<<"yes"<<endl;
      else cout<<"no"<<endl;
    }

  }

  return 0;

}