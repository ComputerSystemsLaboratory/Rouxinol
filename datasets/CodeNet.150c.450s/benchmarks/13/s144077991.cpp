#include<iostream>
#include<string>
typedef unsigned int uint;
using namespace std;

bool brute_force(string &haystack,string &needle){
  uint n_index=0;

  for(uint h_index=0;h_index<haystack.size();h_index++){
    while(haystack.at( (h_index + n_index)%haystack.size() ) == needle.at(n_index)){
      n_index++;
      if(n_index >= needle.size()) return true;
    }
    n_index = 0;
  }
  return false;
}

int main(){
  string haystack;
  string needle;
  cin>>haystack>>needle;
  if(brute_force(haystack,needle)){
    cout<<"Yes"<<endl;
  }
  else
    cout<<"No"<<endl;
  return 0;

}