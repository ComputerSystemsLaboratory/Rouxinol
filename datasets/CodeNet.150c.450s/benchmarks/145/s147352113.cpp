#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
  string s,ans_a,ans_b;
  map<string,int> word;
  int max = 0,len = 0;
  while(cin >>s) word[s]++;
  for(map<string,int>::iterator i=word.begin(); i!=word.end(); i++){
    if(max < i->second){
      max = i->second;
      ans_a = i->first;
    }
    if(len < (i->first).size()){
      len = (i->first).size();
      ans_b = i->first;
    }
  }
  cout <<ans_a<<" "<<ans_b<<endl;
  return 0;
}