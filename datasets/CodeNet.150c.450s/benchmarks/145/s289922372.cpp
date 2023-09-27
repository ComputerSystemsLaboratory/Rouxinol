#include <iostream>
#include <string>
#include <map>
using namespace std;
int main(){
  int c=0;
  string s,large="",max;
  map<string,int>wordbox;
  while(cin>>s){
    wordbox[s]++;
    if(s.length()>large.length())large=s;
  }
  map<string,int>::iterator it=wordbox.begin();
  while(it!=wordbox.end()){
    if((*it).second>c)max=(*it).first,c=(*it).second;
    it++;
  }
  cout<<max<<" "<<large<<endl;
  return 0;
}