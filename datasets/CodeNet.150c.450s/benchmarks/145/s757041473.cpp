#include<string>
#include<map>
#include<iostream>
using namespace std;

int main() {

  string s;
  map<string, int> names;

  while(cin>>s) {
    if(s=="") break;
    if( names.find(s) == names.end() ) {
      names.insert( map<string, int>::value_type(s,1) );
    }else{
      names[s]++;
    }
  }

  //cout<<"AA"<<endl;
  map<string, int>::iterator it = names.begin();
  int max=0,ml=0;
  string lo,fr;
  while( it != names.end() ) {
    //cout<<(*it).first<<" "<<(*it).second<<endl;
    if( (*it).second > max ) {
      max = (*it).second;
      fr = (*it).first;
    }
    if( (*it).first.length() > ml ) {
      ml = (*it).first.length();
      lo = (*it).first;
    }
    it++;
  }

  cout<<fr<<" "<<lo<<endl;
}