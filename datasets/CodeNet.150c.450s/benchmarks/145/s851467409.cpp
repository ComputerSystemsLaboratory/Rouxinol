#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
  string s,a,b="";
  int c=0;
  map<string,int> m;
  while(cin>>s){
    if(s.length()>b.length())b=s;
    m[s]++;
  }
  map<string,int>::iterator it = m.begin();
  while(it!=m.end()){
    if((*it).second>c)c=(*it).second,a=(*it).first;
    it++;
  }
  cout<<a<<" "<<b<<endl;
  return 0;
}