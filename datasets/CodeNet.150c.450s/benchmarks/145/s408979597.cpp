//English Sentence
#include<bits/stdc++.h>
using namespace std;

map<string, int> d;

int main(){
  int max_n=0, max_len=0;
  string s, n_s, len_s;
  while(cin>>s){
    if(max_len<s.length()){
      len_s=s;
      max_len=s.length();
    }
    d[s]++;
    if(max_n<d[s]){
      n_s=s;
      max_n=d[s];
    }
  }
  cout<<n_s<<' '<<len_s<<endl;
  return 0;
}