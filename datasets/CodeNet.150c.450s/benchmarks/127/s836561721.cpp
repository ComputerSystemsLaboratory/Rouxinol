#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;
int main(){
  int m,i,j;
  string str,t1,t2,t3,t4;
  cin>>m;
  while(m--){
    set<string> v;
    cin>>str;
    for(i=0;i<str.size()-1;i++){
      t1=str.substr(0,i+1);
      t2=str.substr(i+1);
      t3=t1;
      t4=t2;
      reverse(t3.begin(),t3.end());
      reverse(t4.begin(),t4.end());
      v.insert(t1+t2);
      v.insert(t2+t1);
      v.insert(t3+t2);
      v.insert(t2+t3);
      v.insert(t1+t4);
      v.insert(t4+t1);
      v.insert(t3+t4);
      v.insert(t4+t3);
    }
    cout<<v.size()<<endl;
  }
  return 0;
}