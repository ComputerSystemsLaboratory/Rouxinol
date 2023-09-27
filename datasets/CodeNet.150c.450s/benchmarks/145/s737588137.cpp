#include<iostream>
#include<string>
#include<map>
using namespace std;
int main(){
  map<string,int> word;
  string s,ans_a,ans_b;
  int con_a = 0,con_b = 0;
  while(cin >>s){
    word[s]++;
  }
  map<string,int>::iterator pos;
  for(pos = word.begin(); pos != word.end(); pos++){
    if(pos->second > con_a){con_a = pos->second; ans_a = pos->first;}
    if((pos->first).size() > con_b){con_b = (pos->first).size(); ans_b = pos->first;}
  }
  cout <<ans_a<<" "<<ans_b<<endl;
  return 0;
}