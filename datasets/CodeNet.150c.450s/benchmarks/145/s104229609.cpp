#include<iostream>
#include<map>
using namespace std;
int main(){
  map<string,int> word;
  string s,ss;
  int a = 0,b = 0;
  while(cin >>s) word[s]++;
  for(map<string,int>::iterator it = word.begin(); it!=word.end(); it++){
    if(a < it->second){a = it->second;ss = it->first;}
    if(b < (it->first).size()){b =  (it->first).size();s = (it->first);}
  }
  cout <<ss<<" "<<s<<endl;
  return 0;
}